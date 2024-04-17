/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>
#include <stdio.h>

// int		check_dups(char *str, char c, int index)
// {
// 	int i = 0;
// 	while(i < index)
// 	{
// 		if (str[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

//repetition
int check_dups(char *str, char c, int index)
{
	int i = 0;
	while(str[i] && i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char** av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		char *str = av[1];
		while(str[i]) // && av[2][j])
		{
			i++;
		}
		while(av[2][j]) // && av[2][j])
		{
			str[i] = av[2][j];
			i++;
			j++;
		}
		str[i] = '\0';

		i = 0;
		while(str[i])
		{
			if (check_dups(str, str[i], i) == 0)
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

