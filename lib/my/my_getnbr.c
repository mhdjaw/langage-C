#include <stdlib.h>
#include <stdio.h>

int my_getnbr(char *str)
{
	int nb;
	int mal;
	int i;
	mal = 1;
	nb = 0;
	i = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mal = mal * -1;
		i = i + 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nb = nb * 10;
			nb = nb + str[i] - '0';
			i = i + 1;
		}
		else
			return (nb * mal);
	}
	return (nb * mal);
}
