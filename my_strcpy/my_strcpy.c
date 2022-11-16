/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int my_size (const char *str) {
    int j=0;
while(str[j]!= '\0') {
    j++;
}
  return j;
} 
char *my_strcpy(char *dest, const char *src) {
  int i;
  int size = my_size(src);
for (i=0; i<size ; i++ ) {
    dest[i] = src[i];
}
  dest[size]='\0';
  return dest ;
}
