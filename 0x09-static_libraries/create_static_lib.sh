#!/bin/bash
gcc -Wall -Waxtra -Werror -pedantic -c *.o
ar rc liball.a *.o
