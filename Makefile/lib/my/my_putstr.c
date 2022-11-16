#include <stdio.h>
#include <stdlib.h>

void my_putstr(const char *str)
{
	while (*str != '\0')
	       printf("%c",*str++);	
}
