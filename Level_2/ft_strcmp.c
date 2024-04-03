/*
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/
#include <stdio.h>
int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] || s2[i])
	{
		if (s2[i] != s1[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	int res = ft_strcmp("hello", "helloo");
// 	printf("%d\n", res);
// }