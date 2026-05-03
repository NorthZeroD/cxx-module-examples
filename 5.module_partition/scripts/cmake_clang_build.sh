#!/usr/bin/bash

# config
cmake -S. -B build \
    -G Ninja \
    -DCMAKE_BUILD_TYPE=Debug \
    -DCMAKE_CXX_COMPILER=clang++ \

# build
cmake --build build
