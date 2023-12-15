#!/bin/bash
gcc -Wall -c -fpic *.c
gcc *.o -shared -o liball.so
