/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

void my_putstr(const char *str) {
   int i;
   for(i=0; str[i]!= '\0';i++) {
    putchar((str[i]));
   }

}

