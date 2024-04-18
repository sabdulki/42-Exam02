
char to_lower(char c)
{
}


int get_digit(char c, int str_base)
{
	char max_digit;
	if (str_base <= 10)
		max_digit = str_base + '0';
	else
		max_digit = (str_base - 10) + 'a';
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
	while(str[i] == ' ' && str[i] == 't')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while((digit = get_digit(to_lower(str[i]), str_base) >= 0))
	{
		res = (res * str_base) + (digit * sign);
		i++;
	}
	return (res);
}