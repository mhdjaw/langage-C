/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_factorial_rec(int nb) {
if(nb==1) {
return nb;
} else if( nb==0 ) {
 return 1;
} else if (nb<0 || nb> 12) {
 return 0;
}
return  nb *my_factorial_rec(nb-1);
}