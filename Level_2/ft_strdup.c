/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/

// не забывай проверки с malloc!
#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	while(src[i])
		i++;
	char *str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return(NULL);
	i = 0;
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char *strdup2(char *str)
// {
// 	int i = 0;
// 	int len = 0;
// 	while(str[len])
// 		len++;
// 	char * res = malloc(sizeof(char) * len + 1);
// 	if (!res)
// 		return(NULL);
// 	while(str[i] && i < len)
// 	{
// 		res[i] = str[i];
// 		i++;
// 	}
// 	res[i] = '\0';
// 	return (res);
// }

int main()
{
	printf("%s\n", ft_strdup("asdfghjkl;"));
}