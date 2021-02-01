/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   Product name: redemption, a FLOSS RDP proxy
   Copyright (C) Wallix 2011
   Author(s): Christophe Grosjean, Dominique Lafages
   Based on xrdp Copyright (C) Jay Sorg 2004-2010

   header file. Keylayout_r object, used by keymap managers
*/

#pragma once

#include "utils/sugar/array_view.hpp"
#include "cxx/cxx.hpp"

//====================================
// SCANCODES PHYSICAL LAYOUT REFERENCE
//====================================
// +----+  +----+----+----+----+  +----+----+----+----+  +----+----+----+----+  +----+----+-------+
// | 01 |  | 3B | 3C | 3D | 3E |  | 3F | 40 | 41 | 42 |  | 43 | 44 | 57 | 58 |  | 37 | 46 | 1D+45 |
// +----+  +----+----+----+----+  +----+----+----+----+  +----+----+----+----+  +----+----+-------+
//                                     ***  keycodes suffixed by 'x' are extended ***
// +----+----+----+----+----+----+----+----+----+----+----+----+----+--------+  +----+----+----+  +--------------------+
// | 29 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 0A | 0B | 0C | 0D |   0E   |  | 52x| 47x| 49x|  | 45 | 35x| 37 | 4A  |
// +-------------------------------------------------------------------------+  +----+----+----+  +----+----+----+-----+
// |  0F  | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 1A | 1B |      |  | 53x| 4Fx| 51x|  | 47 | 48 | 49 |     |
// +------------------------------------------------------------------+  1C  |  +----+----+----+  +----+----+----| 4E  |
// |  3A   | 1E | 1F | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 2B |     |                    | 4B | 4C | 4D |     |
// +-------------------------------------------------------------------------+       +----+       +----+----+----+-----+
// |  2A | 56 | 2C | 2D | 2E | 2F | 30 | 31 | 32 | 33 | 34 | 35 |    36      |       | 48x|       | 4F | 50 | 51 |     |
// +-------------------------------------------------------------------------+  +----+----+----+  +---------+----| 1Cx |
// |  1D  |  5Bx | 38 |           39           |  38x  |  5Cx |  5Dx |  1Dx  |  | 4Bx| 50x| 4Dx|  |    52   | 53 |     |
// +------+------+----+------------------------+-------+------+------+-------+  +----+----+----+  +---------+----+-----+


struct Keylayout_r
{
    struct KeyLayoutMap_t
    {
        using scancode_type = uint8_t;

        struct data_type
        {
            uint8_t high;
            // array of 256 elements
            scancode_type const* scancodes;
        };

        array_view<data_type> scancodes_list;

        scancode_type find(uint16_t uchar) const
        {
            for (data_type const& d : scancodes_list) {
                if (REDEMPTION_LIKELY(d.high == uint8_t(uchar >> 8u))) {
                    scancode_type scancode = d.scancodes[uchar & 0xff];
                    if (REDEMPTION_LIKELY(scancode)) {
                        return scancode;
                    }
                }
            }
            return 0;
        }

        scancode_type find_ascii(uint8_t uchar) const
        {
            return scancodes_list[0].scancodes[uchar];
        }
    };

    struct DeadKeyLayoutMap_t
    {
        uint8_t const* high_ids;
        // view on array of u8[256]
        uint8_t const* const* low_ids;
        KeyLayoutMap_t const* layouts;

        KeyLayoutMap_t const* find_layout(uint16_t uchar) const
        {
            if (auto id = high_ids[uchar >> 8]) {
                if (auto layout_id = low_ids[id-1][uchar & 0xffu]) {
                    return &layouts[layout_id-1];
                }
            }

            return nullptr;
        }
    };

    int LCID; // Microsoft Locale ID code used for keyboard layouts
    char const * locale_name;

    KeyLayoutMap_t noMod;
    KeyLayoutMap_t shift;
    KeyLayoutMap_t altGr;
    KeyLayoutMap_t shiftAltGr;
    KeyLayoutMap_t ctrl;
    KeyLayoutMap_t capslock_noMod;
    KeyLayoutMap_t capslock_shift;
    KeyLayoutMap_t capslock_altGr;
    KeyLayoutMap_t capslock_shiftAltGr;
    DeadKeyLayoutMap_t dead;
};