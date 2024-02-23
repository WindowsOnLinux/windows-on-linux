/*
 * This module implements functions from the kernel32.dll library
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

#include "profileapi.h"
#include <ctime>

#define NANOSECONDS_IN_SECOND 1000000000LL

BOOL QueryPerformanceCounter(LARGE_INTEGER* lpPerformanceCount) {
    timespec time = {};
    clock_gettime(CLOCK_REALTIME, &time);

    //In this implementation 1 count is equivalent to 1 nanosecond
    lpPerformanceCount->QuadPart = time.tv_sec * NANOSECONDS_IN_SECOND + time.tv_nsec;
    return TRUE;
}

BOOL QueryPerformanceFrequency(LARGE_INTEGER* lpFrequency) {
    //In this implementation 1 count is equivalent to 1 nanosecond
    lpFrequency->QuadPart = NANOSECONDS_IN_SECOND;
    return TRUE;
}
