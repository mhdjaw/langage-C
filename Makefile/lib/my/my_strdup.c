#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_strlen(char const *str)
{
        int i ;
        while(str[i] != 0)i++;
        return i;
}
char *my_strdup(const char *src)
{
    int size = my_strlen(src);
    char *str = malloc((sizeof(char) * size) + 1);
    for (int i = 0; i < size; i++) {
        str[i] = src[i];
    }
    str[size] = '\0';
    return str;
}
