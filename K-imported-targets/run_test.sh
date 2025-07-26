#!/bin/bash
# Make sure we have the minimum cmake version
echo "Checking cmake version"
cmake_version=`cmake --version | grep version | cut -d" " -f3`

echo "cmake version is: $cmake_version"
[[ "$cmake_version"  =~ ([3-9][.](5|[6-9]|[1-9][0-9]+)[.][0-9]) ]] || exit 0

echo "correct version of cmake"
mkdir -p build && cd build && cmake .. && make
if [ $? -ne 0 ]; then
    echo "Error running example"
    exit 1
fi
