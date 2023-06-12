#!/bin/bash
gcc -c -Wall -Werror -Wextra *.o
ar -rcs liball.a *.o
rm *.o
