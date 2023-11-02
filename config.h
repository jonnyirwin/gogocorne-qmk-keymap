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

#define EE_HANDS
#define MASTER_LEFT
#define COMBO_COUNT 18
#define COMBO_ONLY_FROM_LAYER 0

#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { F6, F7, B1, B3 }
#undef MATRIX_ROW_PINS_RIGHT
#define MATRIX_ROW_PINS_RIGHT { D4, C6, D7, E6 }
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6 }
#undef MATRIX_COL_PINS_RIGHT
#define MATRIX_COL_PINS_RIGHT { F4, F5, F6, F7, B1, B3 }
