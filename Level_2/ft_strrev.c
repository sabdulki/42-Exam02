/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);

*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strrev(char *str)
{
	int i = -1;
	int len = 0;
	char tmp;
	while(str[len])
		len++;
	// len = len - 1;
	while(++i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		// printf("i: %c, len: %c\n", str[i], str[len - i]);
		// i++;
	}
	// printf("%s\n", str);
	return (str);
}

int main()
{
	ft_strrev("abc");
}