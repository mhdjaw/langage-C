#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int my_strlen(const char *str)
{
	    int i = 0 ;
	    while (str[i] != '\0' )
		    i++ ;
	    return i ;
}
