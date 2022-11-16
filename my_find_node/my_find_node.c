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
linked_list_t *my_find_node(linked_list_t *list, const int data_ref) {
    linked_list_t *ptr = list;
    while (ptr!=NULL)
    {
        if (ptr->data == data_ref)
        {
            return ptr; 
        }
        ptr = ptr->next;
    }
    return NULL;
    
}