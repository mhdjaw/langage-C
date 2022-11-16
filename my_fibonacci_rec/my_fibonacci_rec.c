/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_fibonacci_rec(int nb) {
  if(nb<=0 || nb>46)  {
    return 0;
} else if (nb==1 || nb == 2) {
  return 1;
} else  {
  return my_fibonacci_rec(nb-1) + my_fibonacci_rec(nb-2);
}
}