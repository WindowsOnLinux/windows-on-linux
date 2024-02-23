# This module implements functions from the kernel32.dll library
#
#
#
# MIT License
#
# Copyright (c) 2024 Windows on Linux
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

cmake_minimum_required(VERSION 3.9)
project(kernel32
    VERSION 0.1.0
    DESCRIPTION "kernel32.dll implementation"
)

set(KERNEL32_SOURCES
    profileapi.cpp profileapi.h
)

add_library(kernel32-32bit SHARED ${KERNEL32_SOURCES})
target_link_libraries(kernel32-32bit PRIVATE common-headers)
set_target_properties(kernel32-32bit PROPERTIES
    PREFIX ""
    OUTPUT_NAME "kernel32"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/libraries/bin32"

    COMPILE_FLAGS "-m32"
    LINK_FLAGS "-m32"
)

add_library(kernel32-64bit SHARED ${KERNEL32_SOURCES})
target_link_libraries(kernel32-64bit PRIVATE common-headers)
set_target_properties(kernel32-64bit PROPERTIES
    PREFIX ""
    OUTPUT_NAME "kernel32"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/libraries/bin64"

    COMPILE_FLAGS "-m64"
    LINK_FLAGS "-m64"
)
