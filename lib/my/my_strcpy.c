#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_strlen(char const *str)
{
	int i ;
	while(str[i] != 0)i++;
	return i;
}
char *my_strcpy(char *dest, const char *src)
{
	int size = my_strlen(src);
	for (int i=0; i < size ; i++ )
	{
		dest[i] = src[i];
	}
	dest[size] = '\0';
	return dest;
}
