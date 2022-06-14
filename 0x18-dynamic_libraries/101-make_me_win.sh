#!/bin/bash
wget -0 /tmp/win.so https://github.com/Enoch79/alx-low_level_programming/raw/master/0x18-dynamic_libraries/win.so
wxport LD_PRELOAD=/tmp/win.so
