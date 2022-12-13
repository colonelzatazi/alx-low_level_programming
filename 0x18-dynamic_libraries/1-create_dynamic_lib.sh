#!/bin/bash

# create object file
gcc -c *.c -shared -fpic
# create library from object files
gcc -o liball.so *.o -fpic -shared
# clean up
rm *.o
