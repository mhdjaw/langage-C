/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

/*#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>*/

char *my_strncpy(char *dest, const char *src, int n) {
  int i;
   for (i=0; i<src[i]!=0 ; i++ )
    dest[i] = src[i];
    for ( ; i < n; i++) 
        dest[i] = '\0';

  return dest ;
}


