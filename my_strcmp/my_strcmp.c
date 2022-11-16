/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_strcmp(const char *s1, const char *s2) {
     char asci1 = 0;
     char asci2 = 0;
  for (int j=0; s1[j]!= '\0';j++) {
    asci1=asci1 + s1[j];
  }
    for (int i=0; s2[i]!= '\0';i++) {
        asci2=asci2 + s2[i];
    } 
    
    if (asci1>asci2) {
        return 1;
    } else if (asci1<asci2) {
        return -1;
        } else {
            return 0;
        }
  }      

