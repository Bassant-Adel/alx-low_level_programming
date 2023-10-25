#!/bin/bash
wget -P /tmp_test https://github.com/Bassant-Adel/alx-low_level_programming/main/0x18-dynamic_libraries/librand_override.so
export LD_PRELOAD=/tmp_test/librand_override.so
