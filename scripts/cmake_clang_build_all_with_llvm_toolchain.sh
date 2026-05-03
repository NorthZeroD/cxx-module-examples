#!/usr/bin/bash

set -e
cd "$(dirname "${BASH_SOURCE[0]}")"
cd ..
pwd
for i in {1..5}; do
    cd ${i}.*/
    pwd
    bash scripts/cmake_clang_build_with_llvm_toolchain.sh
    cd ..
done
echo Done.
