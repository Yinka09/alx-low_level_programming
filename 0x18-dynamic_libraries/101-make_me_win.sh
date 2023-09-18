#!/bin/bash

# Download the shared library to /tmp and specify the output file name
wget -O /tmp/libgiga.so https://github.com/Yinka09/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so

# Set LD_PRELOAD to the absolute path of the downloaded library
export LD_PRELOAD=/tmp/libgiga.so

