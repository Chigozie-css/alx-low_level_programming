#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Chigozie-css/alx-low_level_programming/master/0x18-dynamic_libraries/libhacker.so
export LD_PRELOAD="$PWD/../libhacker.so"
