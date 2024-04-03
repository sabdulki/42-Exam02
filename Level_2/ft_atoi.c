/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

#include <stdio.h>



int	ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	while((str[i] >= 9 && str[i] <= 13) || str[1] == ' ')
		i++;
	
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0'); //1, 12, 123  
		i++;
	}
	return (res * sign);
}

int main()
{
	int c = ft_atoi("123");
	printf("%d\n", c);
}