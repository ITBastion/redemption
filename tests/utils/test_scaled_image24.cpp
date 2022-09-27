/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 021249, USA.

   Product name: redemption, a FLOSS RDP proxy
   Copyright (C) Wallix 2012
   Author(s): Christophe Grosjean

   Unit test to conversion of RDP drawing orders to PNG images
*/

#include "utils/scaled_image24.hpp"
#include "utils/bitmap_from_file.hpp"
#include "utils/png.hpp"

#include "test_only/test_framework/redemption_unit_tests.hpp"
#include "test_only/test_framework/check_img.hpp"
#include "test_only/transport/test_transport.hpp"


RED_AUTO_TEST_CASE(TestSimpleShrink)
{
    const int width = 15;
    const int height = 7;
    const unsigned rowsize = 45;

    const uint8_t data[] = {
        0x0F, 0x0E, 0x0D, /**/ 0x0C, 0x0B, 0x0A, /**/ 0x09, 0x08, 0x07, /**/ 0x06, 0x05, 0x04,
        0x03, 0x02, 0x01, /**/ 0x00, 0x1F, 0x1E, /**/ 0x1D, 0x1C, 0x1B, /**/ 0x1A, 0x19, 0x18,
        0x17, 0x16, 0x15, /**/ 0x14, 0x13, 0x12, /**/ 0x10, 0x2F, 0x2E, /**/ 0x2D, 0x2C, 0x2B,
        0x2A, 0x29, 0x28, /**/ 0x27, 0x26, 0x25, /**/ 0x24, 0x23, 0x22,

        0x0F, 0x0E, 0x0D, /**/ 0x0C, 0x0B, 0x0A, /**/ 0x09, 0x08, 0x07, /**/ 0x06, 0x05, 0x04,
        0x03, 0x02, 0x01, /**/ 0x00, 0x1F, 0x1E, /**/ 0x1D, 0x1C, 0x1B, /**/ 0x1A, 0x19, 0x18,
        0x17, 0x16, 0x15, /**/ 0x14, 0x13, 0x12, /**/ 0x10, 0x2F, 0x2E, /**/ 0x2D, 0x2C, 0x2B,
        0x2A, 0x29, 0x28, /**/ 0x27, 0x26, 0x25, /**/ 0x24, 0x23, 0x22,

        0x0F, 0x0E, 0x0D, /**/ 0x0C, 0x0B, 0x0A, /**/ 0x09, 0x08, 0x07, /**/ 0x06, 0x05, 0x04,
        0x03, 0x02, 0x01, /**/ 0x00, 0x1F, 0x1E, /**/ 0x1D, 0x1C, 0x1B, /**/ 0x1A, 0x19, 0x18,
        0x17, 0x16, 0x15, /**/ 0x14, 0x13, 0x12, /**/ 0x10, 0x2F, 0x2E, /**/ 0x2D, 0x2C, 0x2B,
        0x2A, 0x29, 0x28, /**/ 0x27, 0x26, 0x25, /**/ 0x24, 0x23, 0x22,

        0x0F, 0x0E, 0x0D, /**/ 0x0C, 0x0B, 0x0A, /**/ 0x09, 0x08, 0x07, /**/ 0x06, 0x05, 0x04,
        0x03, 0x02, 0x01, /**/ 0x00, 0x1F, 0x1E, /**/ 0x1D, 0x1C, 0x1B, /**/ 0x1A, 0x19, 0x18,
        0x17, 0x16, 0x15, /**/ 0x14, 0x13, 0x12, /**/ 0x10, 0x2F, 0x2E, /**/ 0x2D, 0x2C, 0x2B,
        0x2A, 0x29, 0x28, /**/ 0x27, 0x26, 0x25, /**/ 0x24, 0x23, 0x22,

        0x0F, 0x0E, 0x0D, /**/ 0x0C, 0x0B, 0x0A, /**/ 0x09, 0x08, 0x07, /**/ 0x06, 0x05, 0x04,
        0x03, 0x02, 0x01, /**/ 0x00, 0x1F, 0x1E, /**/ 0x1D, 0x1C, 0x1B, /**/ 0x1A, 0x19, 0x18,
        0x17, 0x16, 0x15, /**/ 0x14, 0x13, 0x12, /**/ 0x10, 0x2F, 0x2E, /**/ 0x2D, 0x2C, 0x2B,
        0x2A, 0x29, 0x28, /**/ 0x27, 0x26, 0x25, /**/ 0x24, 0x23, 0x22,

        0x0F, 0x0E, 0x0D, /**/ 0x0C, 0x0B, 0x0A, /**/ 0x09, 0x08, 0x07, /**/ 0x06, 0x05, 0x04,
        0x03, 0x02, 0x01, /**/ 0x00, 0x1F, 0x1E, /**/ 0x1D, 0x1C, 0x1B, /**/ 0x1A, 0x19, 0x18,
        0x17, 0x16, 0x15, /**/ 0x14, 0x13, 0x12, /**/ 0x10, 0x2F, 0x2E, /**/ 0x2D, 0x2C, 0x2B,
        0x2A, 0x29, 0x28, /**/ 0x27, 0x26, 0x25, /**/ 0x24, 0x23, 0x22,

        0x0F, 0x0E, 0x0D, /**/ 0x0C, 0x0B, 0x0A, /**/ 0x09, 0x08, 0x07, /**/ 0x06, 0x05, 0x04,
        0x03, 0x02, 0x01, /**/ 0x00, 0x1F, 0x1E, /**/ 0x1D, 0x1C, 0x1B, /**/ 0x1A, 0x19, 0x18,
        0x17, 0x16, 0x15, /**/ 0x14, 0x13, 0x12, /**/ 0x10, 0x2F, 0x2E, /**/ 0x2D, 0x2C, 0x2B,
        0x2A, 0x29, 0x28, /**/ 0x27, 0x26, 0x25, /**/ 0x24, 0x23, 0x22,
    };

    // TODO: as we can see scale also do a BGR/RGB translation on the fly
    // We should make that obvious in the function name.
    const uint8_t expected[] = {
        0x0d, 0x0e, 0x0f, /**/ 0x0a, 0x0b, 0x0c, /**/ 0x04, 0x05, 0x06, /**/ 0x1e, 0x1f, 0x00,
        0x18, 0x19, 0x1a, /**/ 0x12, 0x13, 0x14, /**/ 0x2b, 0x2c, 0x2d, /**/ 0x25, 0x26, 0x27,

        0x0d, 0x0e, 0x0f, /**/ 0x0a, 0x0b, 0x0c, /**/ 0x04, 0x05, 0x06, /**/ 0x1e, 0x1f, 0x00,
        0x18, 0x19, 0x1a, /**/ 0x12, 0x13, 0x14, /**/ 0x2b, 0x2c, 0x2d, /**/ 0x25, 0x26, 0x27,

        0x0d, 0x0e, 0x0f, /**/ 0x0a, 0x0b, 0x0c, /**/ 0x04, 0x05, 0x06, /**/ 0x1e, 0x1f, 0x00,
        0x18, 0x19, 0x1a, /**/ 0x12, 0x13, 0x14, /**/ 0x2b, 0x2c, 0x2d, /**/ 0x25, 0x26, 0x27,
    };

    unsigned const zoom_factor = 50;
    unsigned const scaled_width = (((width * zoom_factor) / 100) + 3) & 0xFFC;
    unsigned const scaled_height = (height * zoom_factor) / 100;

    static_assert(scaled_width == 8);
    static_assert(scaled_height == 3);

    uint8_t scaled_buffer[scaled_width * scaled_height * 3];

    static_assert(sizeof(expected) == sizeof(scaled_buffer));

    // Zoom 50
    scale_image24(
        scaled_buffer, data,
        scaled_width, width,
        scaled_height, height,
        rowsize);

    RED_CHECK(make_array_view(expected) == make_array_view(scaled_buffer));
}

RED_AUTO_TEST_CASE(TestScaleImage)
{
    RED_CHECK(!ScaledPng24(0, 0).is_scaled());
    RED_CHECK(!ScaledPng24(10, 0).is_scaled());
    RED_CHECK(!ScaledPng24(0, 10).is_scaled());

    auto bmp = bitmap_from_file(FIXTURES_PATH "/win2008capture10.png", BGRColor());
    RED_REQUIRE(bmp.cx() == 800);
    RED_REQUIRE(bmp.cy() == 600);
    RED_REQUIRE(bmp.bpp() == BitsPerPixel::BitsPP24);

    // Zoom 50
    const uint16_t width = 400;
    const uint16_t height = 300;
    const unsigned line_size = ((width + 3) & 0xffc) * 3;

    BufTransport trans;
    ScaledPng24 scaled_png(width, height);
    RED_CHECK(scaled_png.is_scaled());

    scaled_png.dump_png24(trans, bmp, false);

    uint8_t data[line_size * height];
    WritableImageView img{
        data, width, height, line_size,
        BitsPerPixel::BitsPP24, ImageView::Storage::TopToBottom
    };

    read_png24(trans, img);
    RED_CHECK_IMG(img, FIXTURES_PATH "/scaled_image24/win2008capture10_50_percent.png");
}