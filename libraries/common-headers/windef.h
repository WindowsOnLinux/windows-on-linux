/*
 * This module contains common Windows API headers
 *
 *
 *
 * MIT License
 *
 * Copyright (c) 2024 Windows on Linux
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

#ifndef WINDEF_H
#define WINDEF_H

#include "winnt.h"

#define FALSE 0
#define TRUE 1

typedef int BOOL;
typedef unsigned char BYTE;
typedef unsigned long ULONG;
typedef unsigned long long ULONGLONG;
typedef unsigned short WORD;

struct RECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef RECT* LPRECT;
typedef RECT* PRECT;

#endif