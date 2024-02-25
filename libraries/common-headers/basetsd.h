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

#ifndef BASETSD_H
#define BASETSD_H

typedef signed int INT32;
typedef signed long long INT64;
typedef unsigned int UINT32;
typedef unsigned long long UINT64;

#ifndef __i386__
    typedef long long INT_PTR;
    typedef long long LONG_PTR;
    typedef unsigned long long UINT_PTR;
    typedef unsigned long long ULONG_PTR;
#else
    typedef int INT_PTR;
    typedef long LONG_PTR;
    typedef unsigned int UINT_PTR;
    typedef unsigned long ULONG_PTR;
#endif

typedef ULONG_PTR DWORD_PTR;


#endif