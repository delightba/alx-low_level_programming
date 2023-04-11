#!/bin/bash
<<<<<<< HEAD
gcc -c *.c
ar -rc liball.a *.o
=======
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -crs liball.a *.o
>>>>>>> 2373ba4902565b392af52d18dc3398177f7a3b08
