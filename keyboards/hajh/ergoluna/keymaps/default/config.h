/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

// OLED time out
#define OLED_TIMEOUT 0

//RGBLIGHT
#ifdef RGBLIGHT_ENABLE 
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LIMIT_VAL 225
#define RGBLIGHT_HUE_STEP 1
#define RGBLIGHT_SAT_STEP 1
#define RGBLIGHT_VAL_STEP 1
#endif

