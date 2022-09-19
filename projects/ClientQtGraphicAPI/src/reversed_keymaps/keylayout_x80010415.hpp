#pragma once

#include "keylayout_r.hpp"

namespace x80010415
{

const static int LCID = 0x10415;

const static char * const locale_name = "pl-PL";

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_noMod[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x0020, 0x0027, 0x002a,
    0x002b, 0x002b, 0x002c, 0x002c, 0x002d, 0x002d, 0x002e, 0x002f,
    0x0030, 0x0030, 0x0031, 0x0031, 0x0032, 0x0032, 0x0033, 0x0033,
    0x0034, 0x0034, 0x0035, 0x0035, 0x0036, 0x0036, 0x0037, 0x0037,
    0x0038, 0x0038, 0x0039, 0x0039, 0x003c, 0x0061, 0x0062, 0x0063,
    0x0064, 0x0065, 0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b,
    0x006c, 0x006d, 0x006e, 0x006f, 0x0070, 0x0071, 0x0072, 0x0073,
    0x0074, 0x0075, 0x0076, 0x0077, 0x0078, 0x0079, 0x007a, 0x00f3,
    0x0105, 0x0142, 0x015b, 0x017c, 0x02db, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_noMod[] {
        14,     15,     28,    100,      1,     57,     13,     55,
        78,     12,     83,     51,     74,     53,     52,     98,
        82,     11,     79,      2,      3,     80,     81,      4,
        75,      5,     76,      6,      7,     77,     71,      8,
        72,      9,     73,     10,     86,     30,     48,     46,
        32,     18,     33,     34,     35,     23,     36,     37,
        38,     50,     49,     24,     25,     16,     19,     31,
        20,     22,     47,     17,     45,     44,     21,     43,
        40,     39,     27,     26,     41, 
};
constexpr Keylayout_r::KeyLayoutMap_t noMod{uchar_noMod, scancode_noMod, 69};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_shift[] {
    0x0008, 0x000d, 0x000d, 0x001b, 0x0020, 0x0021, 0x0022, 0x0023,
    0x0025, 0x0026, 0x0028, 0x0029, 0x002a, 0x002a, 0x002b, 0x002c,
    0x002d, 0x002f, 0x002f, 0x003a, 0x003b, 0x003d, 0x003e, 0x003f,
    0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048,
    0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 0x004f, 0x0050,
    0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 0x0058,
    0x0059, 0x005a, 0x005f, 0x007f, 0x00a4, 0x00b7, 0x0107, 0x0119,
    0x0141, 0x0144, 0x017a, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_shift[] {
        14,     28,    100,      1,     57,      2,      3,      4,
         6,      7,      9,     10,     13,     55,     78,     83,
        74,    104,      8,     52,     51,     11,     86,     12,
        30,     48,     46,     32,     18,     33,     34,     35,
        23,     36,     37,     38,     50,     49,     24,     25,
        16,     19,     31,     20,     22,     47,     17,     45,
        44,     21,     53,     99,      5,     41,     27,     40,
        39,     26,     43, 
};
constexpr Keylayout_r::KeyLayoutMap_t shift{uchar_shift, scancode_shift, 59};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_altGr[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x0024, 0x002a, 0x002b,
    0x002d, 0x002f, 0x003c, 0x003e, 0x0040, 0x005c, 0x005e, 0x0060,
    0x007b, 0x007d, 0x007e, 0x00a6, 0x00a7, 0x00a8, 0x00b0, 0x00b4,
    0x00b7, 0x00b8, 0x00d7, 0x00df, 0x00f7, 0x0110, 0x0111, 0x02c7,
    0x02d8, 0x02db, 0x02dd, 0x20ac, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_altGr[] {
        14,     15,     28,    100,      1,     39,     55,     78,
        74,     98,     51,     52,     47,     16,      4,      8,
        48,     49,      2,     17,     50,     12,      6,     10,
         9,     13,     27,     40,     26,     32,     31,      3,
         5,      7,     11,     22, 
};
constexpr Keylayout_r::KeyLayoutMap_t altGr{uchar_altGr, scancode_altGr, 36};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_shiftAltGr[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x002a, 0x002b, 0x002d,
    0x002f, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_shiftAltGr[] {
        14,     15,     28,    100,      1,     55,     78,     74,
        98, 
};
constexpr Keylayout_r::KeyLayoutMap_t shiftAltGr{uchar_shiftAltGr, scancode_shiftAltGr, 9};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_capslock_noMod[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x0020, 0x0027, 0x002a,
    0x002b, 0x002b, 0x002c, 0x002c, 0x002d, 0x002d, 0x002e, 0x002f,
    0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037,
    0x0038, 0x0039, 0x003c, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045,
    0x0046, 0x0047, 0x0048, 0x0049, 0x004a, 0x004b, 0x004c, 0x004d,
    0x004e, 0x004f, 0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055,
    0x0056, 0x0057, 0x0058, 0x0059, 0x005a, 0x00f3, 0x0105, 0x0141,
    0x015b, 0x017c, 0x02db, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_capslock_noMod[] {
        14,     15,     28,    100,      1,     57,     13,     55,
        78,     12,     83,     51,     74,     53,     52,     98,
        11,      2,      3,      4,      5,      6,      7,      8,
         9,     10,     86,     30,     48,     46,     32,     18,
        33,     34,     35,     23,     36,     37,     38,     50,
        49,     24,     25,     16,     19,     31,     20,     22,
        47,     17,     45,     44,     21,     43,     40,     39,
        27,     26,     41, 
};
constexpr Keylayout_r::KeyLayoutMap_t capslock_noMod{uchar_capslock_noMod, scancode_capslock_noMod, 59};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_capslock_shift[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x0020, 0x0021, 0x0022,
    0x0023, 0x0025, 0x0026, 0x0028, 0x0029, 0x002a, 0x002a, 0x002b,
    0x002c, 0x002d, 0x002f, 0x002f, 0x003a, 0x003b, 0x003d, 0x003e,
    0x003f, 0x005f, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066,
    0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e,
    0x006f, 0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076,
    0x0077, 0x0078, 0x0079, 0x007a, 0x00a4, 0x00b7, 0x0107, 0x0119,
    0x0142, 0x0144, 0x017a, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_capslock_shift[] {
        14,     15,    100,     28,      1,     57,      2,      3,
         4,      6,      7,      9,     10,     13,     55,     78,
        83,     74,      8,     98,     52,     51,     11,     86,
        12,     53,     30,     48,     46,     32,     18,     33,
        34,     35,     23,     36,     37,     38,     50,     49,
        24,     25,     16,     19,     31,     20,     22,     47,
        17,     45,     44,     21,      5,     41,     27,     40,
        39,     26,     43, 
};
constexpr Keylayout_r::KeyLayoutMap_t capslock_shift{uchar_capslock_shift, scancode_capslock_shift, 59};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_capslock_altGr[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x0024, 0x002a, 0x002b,
    0x002d, 0x002f, 0x003c, 0x003e, 0x0040, 0x005c, 0x005e, 0x0060,
    0x007b, 0x007d, 0x007e, 0x00a6, 0x00a7, 0x00a8, 0x00b0, 0x00b4,
    0x00b7, 0x00b8, 0x00d7, 0x00df, 0x00f7, 0x0110, 0x0111, 0x02c7,
    0x02d8, 0x02db, 0x02dd, 0x20ac, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_capslock_altGr[] {
        14,     15,     28,    100,      1,     39,     55,     78,
        74,     98,     51,     52,     47,     16,      4,      8,
        48,     49,      2,     17,     50,     12,      6,     10,
         9,     13,     27,     40,     26,     32,     31,      3,
         5,      7,     11,     22, 
};
constexpr Keylayout_r::KeyLayoutMap_t capslock_altGr{uchar_capslock_altGr, scancode_capslock_altGr, 36};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_capslock_shiftAltGr[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x002a, 0x002b, 0x002d,
    0x002f, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_capslock_shiftAltGr[] {
        14,     15,     28,    100,      1,     55,     78,     74,
        98, 
};
constexpr Keylayout_r::KeyLayoutMap_t capslock_shiftAltGr{uchar_capslock_shiftAltGr, scancode_capslock_shiftAltGr, 9};

constexpr Keylayout_r::KeyLayoutMap_t::uchar_type uchar_ctrl[] {
    0x0008, 0x0009, 0x000d, 0x000d, 0x001b, 0x001b, 0x001c, 0x001c,
    0x001d, 0x0020, 0x002a, 0x002b, 0x002d, 0x002f, 
};
constexpr Keylayout_r::KeyLayoutMap_t::scancode_type scancode_ctrl[] {
        14,     15,     28,    100,      1,     26,     43,     86,
        27,     57,     55,     78,     74,     98, 
};
constexpr Keylayout_r::KeyLayoutMap_t ctrl{uchar_ctrl, scancode_ctrl, 14};

const Keylayout_r::KeyLayoutMap_t deadkeys {
};


const static uint8_t nbDeadkeys = 10;

}

static const Keylayout_r keylayout_x80010415(
    x80010415::LCID,
    x80010415::locale_name,
    x80010415::noMod,
    x80010415::shift,
    x80010415::altGr,
    x80010415::shiftAltGr,
    x80010415::ctrl,
    x80010415::capslock_noMod,
    x80010415::capslock_shift,
    x80010415::capslock_altGr,
    x80010415::capslock_shiftAltGr,
    x80010415::deadkeys,
    x80010415::nbDeadkeys
);
