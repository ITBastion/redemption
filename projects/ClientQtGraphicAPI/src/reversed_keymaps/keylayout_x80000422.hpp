#pragma once

#include "keylayout_r.hpp"

namespace x80000422
{

const static int LCID = 0x422;

const static char * const locale_name = "uk-UA";

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_noMod[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x0020, 0x002a, 0x002b,
    0x002c, 0x002d, 0x002d, 0x002e, 0x002e, 0x002f, 0x0030, 0x0030,
    0x0031, 0x0031, 0x0032, 0x0032, 0x0033, 0x0033, 0x0034, 0x0034,
    0x0035, 0x0035, 0x0036, 0x0036, 0x0037, 0x0037, 0x0038, 0x0038,
    0x0039, 0x0039, 0x003d, 0x005c, 0x0430, 0x0431, 0x0432, 0x0433,
    0x0434, 0x0435, 0x0436, 0x0437, 0x0438, 0x0439, 0x043a, 0x043b,
    0x043c, 0x043d, 0x043e, 0x043f, 0x0440, 0x0441, 0x0442, 0x0443,
    0x0444, 0x0445, 0x0446, 0x0447, 0x0448, 0x0449, 0x044c, 0x044e,
    0x044f, 0x0451, 0x0454, 0x0456, 0x0457, 0x0491, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_noMod[] {
        14,     15,     28,    100,      1,     57,     55,     78,
        83,     74,     12,    126,     53,     98,     82,     11,
        79,      2,      3,     80,      4,     81,      5,     75,
         6,     76,      7,     77,     71,      8,     72,      9,
        10,     73,     13,     43,     33,     51,     32,     22,
        38,     20,     39,     25,     48,     16,     19,     37,
        47,     21,     36,     34,     35,     46,     49,     18,
        30,     26,     17,     45,     23,     24,     50,     52,
        44,     41,     40,     31,     27,     86, 
};
constexpr Keylayout_r::KeyLayoutMap_t noMod{uchar_noMod, scancode_noMod, 70};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_shift[] {
    0x0008, 0x000d, 0x000d, 0x001b, 0x0020, 0x0021, 0x0022, 0x0025,
    0x0028, 0x0029, 0x002a, 0x002a, 0x002b, 0x002b, 0x002c, 0x002c,
    0x002d, 0x002e, 0x002f, 0x002f, 0x003a, 0x003b, 0x003f, 0x005f,
    0x007f, 0x0401, 0x0404, 0x0406, 0x0407, 0x0410, 0x0411, 0x0412,
    0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 0x0418, 0x0419, 0x041a,
    0x041b, 0x041c, 0x041d, 0x041e, 0x041f, 0x0420, 0x0421, 0x0422,
    0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 0x0428, 0x0429, 0x042c,
    0x042e, 0x042f, 0x0490, 0x2116, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_shift[] {
        14,     28,    100,      1,     57,      2,      3,      6,
        10,     11,      9,     55,     78,     13,     83,     53,
        74,    126,    104,     43,      7,      5,      8,     12,
        99,     41,     40,     31,     27,     33,     51,     32,
        22,     38,     20,     39,     25,     48,     16,     19,
        37,     47,     21,     36,     34,     35,     46,     49,
        18,     30,     26,     17,     45,     23,     24,     50,
        52,     44,     86,      4, 
};
constexpr Keylayout_r::KeyLayoutMap_t shift{uchar_shift, scancode_shift, 60};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_altGr[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x002a, 0x002b, 0x002d,
    0x002f, 0x0491, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_altGr[] {
        14,     15,     28,    100,      1,     55,     78,     74,
        98,     22, 
};
constexpr Keylayout_r::KeyLayoutMap_t altGr{uchar_altGr, scancode_altGr, 10};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_shiftAltGr[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x002a, 0x002b, 0x002d,
    0x002f, 0x0490, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_shiftAltGr[] {
        14,     15,     28,    100,      1,     55,     78,     74,
        98,     22, 
};
constexpr Keylayout_r::KeyLayoutMap_t shiftAltGr{uchar_shiftAltGr, scancode_shiftAltGr, 10};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_capslock_noMod[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x0020, 0x002a, 0x002b,
    0x002c, 0x002d, 0x002d, 0x002e, 0x002e, 0x002f, 0x0030, 0x0031,
    0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, 0x0038, 0x0039,
    0x003d, 0x005c, 0x0401, 0x0404, 0x0406, 0x0407, 0x0410, 0x0411,
    0x0412, 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 0x0418, 0x0419,
    0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 0x041f, 0x0420, 0x0421,
    0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 0x0428, 0x0429,
    0x042c, 0x042e, 0x042f, 0x0490, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_capslock_noMod[] {
        14,     15,    100,     28,      1,     57,     55,     78,
        83,     74,     12,    126,     53,     98,     11,      2,
         3,      4,      5,      6,      7,      8,      9,     10,
        13,     43,     41,     40,     31,     27,     33,     51,
        32,     22,     38,     20,     39,     25,     48,     16,
        19,     37,     47,     21,     36,     34,     35,     46,
        49,     18,     30,     26,     17,     45,     23,     24,
        50,     52,     44,     86, 
};
constexpr Keylayout_r::KeyLayoutMap_t capslock_noMod{uchar_capslock_noMod, scancode_capslock_noMod, 60};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_capslock_shift[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x0020, 0x0021, 0x0022,
    0x0025, 0x0028, 0x0029, 0x002a, 0x002a, 0x002b, 0x002b, 0x002c,
    0x002c, 0x002d, 0x002e, 0x002f, 0x002f, 0x003a, 0x003b, 0x003f,
    0x005f, 0x0430, 0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0436,
    0x0437, 0x0438, 0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e,
    0x043f, 0x0440, 0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446,
    0x0447, 0x0448, 0x0449, 0x044c, 0x044e, 0x044f, 0x0451, 0x0454,
    0x0456, 0x0457, 0x0491, 0x2116, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_capslock_shift[] {
        14,     15,     28,    100,      1,     57,      2,      3,
         6,     10,     11,      9,     55,     78,     13,     83,
        53,     74,    126,     43,     98,      7,      5,      8,
        12,     33,     51,     32,     22,     38,     20,     39,
        25,     48,     16,     19,     37,     47,     21,     36,
        34,     35,     46,     49,     18,     30,     26,     17,
        45,     23,     24,     50,     52,     44,     41,     40,
        31,     27,     86,      4, 
};
constexpr Keylayout_r::KeyLayoutMap_t capslock_shift{uchar_capslock_shift, scancode_capslock_shift, 60};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_capslock_altGr[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x002a, 0x002b, 0x002d,
    0x002f, 0x0491, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_capslock_altGr[] {
        14,     15,     28,    100,      1,     55,     78,     74,
        98,     22, 
};
constexpr Keylayout_r::KeyLayoutMap_t capslock_altGr{uchar_capslock_altGr, scancode_capslock_altGr, 10};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_capslock_shiftAltGr[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x002a, 0x002b, 0x002d,
    0x002f, 0x0490, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_capslock_shiftAltGr[] {
        14,     15,     28,    100,      1,     55,     78,     74,
        98,     22, 
};
constexpr Keylayout_r::KeyLayoutMap_t capslock_shiftAltGr{uchar_capslock_shiftAltGr, scancode_capslock_shiftAltGr, 10};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_ctrl[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x001b, 0x001c, 0x001c,
    0x001d, 0x0020, 0x002a, 0x002b, 0x002d, 0x002f, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_ctrl[] {
        14,     15,     28,    100,      1,     27,     43,     86,
        39,     57,     55,     78,     74,     98, 
};
constexpr Keylayout_r::KeyLayoutMap_t ctrl{uchar_ctrl, scancode_ctrl, 14};

const Keylayout_r::KeyLayoutMap_t deadkeys {
};


const static uint8_t nbDeadkeys = 0;

}

static const Keylayout_r keylayout_x80000422(
    x80000422::LCID,
    x80000422::locale_name,
    x80000422::noMod,
    x80000422::shift,
    x80000422::altGr,
    x80000422::shiftAltGr,
    x80000422::ctrl,
    x80000422::capslock_noMod,
    x80000422::capslock_shift,
    x80000422::capslock_altGr,
    x80000422::capslock_shiftAltGr,
    x80000422::deadkeys,
    x80000422::nbDeadkeys
);
