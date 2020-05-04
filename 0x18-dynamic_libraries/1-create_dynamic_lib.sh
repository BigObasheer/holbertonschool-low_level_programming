#!/bin/bash
gcc -fPIC *.c
gcc *.o -shared -o liball.so
