/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *my_strcat(char *dest, const char *src) {
  int i; 
  int j;
 for (i = 0; dest[i]!='\0'; i++);
    
  for (j = 0; src[j]!='\0'; j++, i++)
  {
     dest[i] = src[j];

  }
  dest[i] = '\0';
    return dest ;
}