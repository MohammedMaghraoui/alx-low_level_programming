#!/bin/bash
wget -P /tmp git clone https://github.com/MohammedMaghraoui/alx-low_level_programming.git/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
