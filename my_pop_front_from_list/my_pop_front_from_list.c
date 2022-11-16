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
linked_list_t *my_pop_front_from_list(linked_list_t *list) {
    linked_list_t *temp = list -> next;
    
    return temp;
}