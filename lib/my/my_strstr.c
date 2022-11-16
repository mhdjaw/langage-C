#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

char* my_strstr(char *str, const char *to_find)
{
    int size_str = my_strlen(str);
    int size_find = my_strlen(to_find);
    if (size_find > size_str) {
        return 0;
    }
    for (int i = 0; i < (size_str - size_find + 1); i++) {
        int found = 1;
        for (int j = 0; j < size_find; j++) {
            if (str[i + j] != to_find[j]) {
                found = 0;
            }
        }
        if (found == 1) {
            return str[i];
        }
    }
    return 0;
}
