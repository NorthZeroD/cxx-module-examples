#!/usr/bin/bash

# https://0xstubs.org/using-the-c23-std-module-with-clang-18

clang++ -std=c++23 -stdlib=libc++ \
    -Wno-reserved-module-identifier \
    --precompile -o std.pcm /usr/share/libc++/v1/std.cppm

clang++ -std=c++23 -stdlib=libc++ \
    -fmodule-file=std=std.pcm -o main std.pcm main.cpp
