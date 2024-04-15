/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	int len = 0;
	char sign;
	char *str;
	int n = nbr;
	int tmp_len;

	if (nbr == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		sign = '-';
		n *= -1;
		nbr *= -1;
		len++;
	}
	else 
		sign = '+';
	while (n)
	{
		n = n / 10;
		len++;
	}
	if (nbr == 0)
		len += 1;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	else
	{
		int i = -1;
		tmp_len = len - 1;
		while (tmp_len > i)
		{
			if (sign == '-' && tmp_len == 0)
				str[tmp_len] = '-';
			else
				str[tmp_len] = (nbr % 10) + '0';
			nbr /= 10;
			tmp_len--;
		}
	}
	str[len] = '\0';
	return (str);
}

// int main()
// {
// 	int nbr = 0;
// 	char *str = ft_itoa(nbr);
// 	printf("%s\n", str);
// }