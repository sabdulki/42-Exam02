#include <unistd.h>
#include <stdio.h>

int check_dup(char *str, char c, int index)
{
	int i = 0;
	while(str[i] && (i < index || index == -1))
	{
		if (str[i] == c)
			return (1); // it's dup!
		i++;
	}
	return (0); //no dups detected
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		while(av[1][i])
		{
			// if no dups in 1 str						there is needed char in 2 str
			if (check_dup(av[1], av[1][i], i) == 0 && check_dup(av[2], av[1][i], -1) == 1)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}