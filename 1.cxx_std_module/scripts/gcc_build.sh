#!/usr/bin/bash

# https://0xstubs.org/using-the-c23-std-module-with-gcc-15/

g++ -std=c++23 -fmodules -fsearch-include-path -c bits/std.cc

g++ -std=c++23 -fmodules -o main main.cpp
