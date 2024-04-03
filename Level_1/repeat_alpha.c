/* 
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>
#include <stdio.h>

void write_letters(char c)
{
	int count;
	int i = 0;
	if (c >=97 && c <= 122)
		count = c - 96;
	else
		count = c - 64;
	while(i++ < count)
		write(1, &c, 1);	
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while(av[1][i])
		{
			if ((av[1][i] >= 97 && av[1][i] <= 122) || (av[1][i] >= 65 && av[1][i] <= 90))
				write_letters(av[1][i]);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}