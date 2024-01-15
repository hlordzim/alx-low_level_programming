#!/bin/bash
Wget -P .. https://raw.githubusercontent.com/hlordzim/alx-low_level_programming/master/0x18-dynamic_libraries/libhold.so
export LD_PRELOAD="$PWD/../libhold.so"
