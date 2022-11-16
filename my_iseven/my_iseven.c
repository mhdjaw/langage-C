/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

void my_iseven(int n) {
    if( n % 2 == 0) {
        printf("E");
    } else {
        printf("O");
    }
}