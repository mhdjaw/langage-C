/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

void my_print_digits(void) {
    char ascii;
    for ( ascii= 48 ; ascii<=57; ascii++) {
       putchar(ascii);
    }
   
}
