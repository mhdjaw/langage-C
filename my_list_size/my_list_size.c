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

int my_list_size(linked_list_t *begin)
{
    int size=0;
	const linked_list_t *l;
    l = begin;
	while(l!=NULL)
	{
		l = l->next;
        size++;
	}
	return size;
}