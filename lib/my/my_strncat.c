#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_strlen(char const *str)
{
        int i ;
        while(str[i] != 0)i++;
        return i;
}
char *my_strncat(char *dest, const char *src, int n)
{
  int i;
  char *ptr;

  i = 0;
  ptr = dest + my_strlen(dest);
  while (i < n && src[i] != '\0')
    {
      ptr[i] = src[i];
      i += 1;
    }
  ptr[i] = '\0';
  return (dest);
}
