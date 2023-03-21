#!/bin/bash
wget -P /tmp https://github.com/dagoris2010/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/putshack.so
export LD_PRELOAD=/tmp/putshack.so
