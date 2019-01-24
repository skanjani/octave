/*

Copyright (C) 2018-2019 Markus Mützel

This file is part of Octave.

Octave is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Octave is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Octave; see the file COPYING.  If not, see
<https://www.gnu.org/licenses/>.

*/

#if ! defined (octave_iconv_wrappers_h)
#define octave_iconv_wrappers_h 1

#if defined __cplusplus
extern "C" {
#endif

extern void *
octave_iconv_open_wrapper (const char *tocode, const char *fromcode);

extern int
octave_iconv_close_wrapper (void *cd);

#if defined __cplusplus
}
#endif

#endif