#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc libmy.a *.o
ar -t libmy.a
ranlib libmy.a
