/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my_list.h"
linked_list_t *my_push_front_to_list(int value, linked_list_t *list) {
      linked_list_t *nw = malloc(sizeof(linked_list_t));
     nw->data= value;
     nw->next= list;
     list = nw; 
     return list;
}
