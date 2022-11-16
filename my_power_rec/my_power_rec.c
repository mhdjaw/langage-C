/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_power_rec(int nb, int p) {
 if(p==0) { return 1;
 } else  if (p >0){ return nb* my_power_rec(nb,p-1);
}
return 0;
}
