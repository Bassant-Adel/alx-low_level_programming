#!/bin/bash
wget -P /tmp https://github.com/Bassant-Adel/alx-low_level_programming/main/0x18-dynamic_libraries/librand_override.so
export LD_PRELOAD=/tmp/librand_override.so
