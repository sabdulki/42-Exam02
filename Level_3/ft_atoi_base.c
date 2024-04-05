
#include <stdio.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int get_digit(char c, int base)
{
	char max_digit;
	if (base <= 10)
		max_digit = base + '0'; // 9
	else
		max_digit = (base - 10) + 'a'; //f
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return ((c - 'a') + 10);
	return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	int digit;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
	{
		res = (res * str_base) + (digit * sign);
		i++;
	}
	return (res);
}

int main()
{
	int res = ft_atoi_base("-b", 16);
	printf("%d\n", res);
}