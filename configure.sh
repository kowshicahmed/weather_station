#! /bin/sh

cmake -DENABLE_TESTS=OFF -DENABLE_DOCS=OFF -DENABLE_DTLS=OFF -DCMAKE_CC_COMPILER=/opt/gcc-arm-aarch64/bin/aarch64-none-linux-gnu-gcc-10.3.1 -DCMAKE_CXX_COMPILER=/opt/gcc-arm-aarch64/bin/aarch64-none-linux-gnu-g++ -S . -B build/

#cmake -DENABLE_TESTS=OFF -DENABLE_DOCS=OFF -DENABLE_DTLS=OFF -S . -B build/