#!/bin/bash
wget -P /tmp https://github.com/Bassant-Adel/alx-low_level_programming/blob/1ef9f3d7eac5c3d58f43309e6a09e0693c057d46/0x18-dynamic_libraries/librand_override.so
export LD_PRELOAD=/tmp/librand_override.so
