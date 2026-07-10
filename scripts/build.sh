#!/bin/bash

echo "===================================="
echo "Building Vehicle Gateway ECU"
echo "===================================="

mkdir -p build
cd build

cmake ..
make

echo "Build Complete."
