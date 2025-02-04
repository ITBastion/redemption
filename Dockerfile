FROM ubuntu:latest
# Install build dependencies
RUN apt-get -qq update && apt-get install -y g++ libboost-tools-dev libssl-dev libkrb5-dev \
    libgssglue-dev libsnappy-dev libpng-dev libbz2-dev libhyperscan-dev git python3 gettext
# Create build directory
RUN mkdir -p /gcc/
# Set container working directory
WORKDIR /gcc/
# Copy source code into build container
COPY Jamroot targets.jam /gcc/
COPY jam /gcc/jam
COPY projects/ocr1 /gcc/projects/ocr1
COPY projects/redemption_configs /gcc/projects/redemption_configs
COPY tools/i18n /gcc/tools/i18n
COPY src /gcc/src
COPY include /gcc/include
COPY sys /gcc/sys
# Clone ppocr repository; could be replaced with `git submodule update --init` but
# if this runs from another git repository (a fork for example) the owner of the
# fork must ensure they also fork ppocr and make sure that ../ppocr leads to the proper git repository
RUN mkdir -p modules && cd modules && git clone https://github.com/wallix/ppocr.git ppocr
# Build and install rdpproxy
RUN bjam linkflags=-static-libstdc++ variant=release -q --toolset=gcc \
    cxxflags='-DREDEMPTION_DISABLE_NO_BOOST_PREPROCESSOR_WARNING' cxx-lto=on \
    -s NO_FFMPEG=1 -s FORCE_LOGPRINT=1 \
    --prefix=/usr/local \
    -sETC_PREFIX=/usr/local/etc/rdpproxy \
    -sVAR_PREFIX=/usr/local/etc/rdpproxy/var \
    -sPID_PATH=/usr/local/etc/rdpproxy/var/pid \
    -sSESSION_PREFIX=/usr/local/etc/rdpproxy/var/lib/redemption \
    install && echo "done"


FROM ubuntu:latest
# Install runtime dependencies
RUN apt-get -qq update && apt-get install -y libgssapi-krb5-2 libpng16-16 libsnappy1v5 python3 libhyperscan5
# Copy built rdpproxy
COPY --from=0 /usr/local /usr/local
# Expose RDP Server port
EXPOSE 3389
# Copy container startup script
COPY ./start.sh /
# Copy passthrough script
COPY ./tools/passthrough /usr/local/share/passthrough/
# Container entry point
CMD [ "/start.sh" ]
