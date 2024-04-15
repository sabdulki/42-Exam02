/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main (int ac, char ** av)
{
	if (ac >= 2)
	{
		int i = 0;
		int len = 0;
		int fw_i = 0;
		char *str = av[1];
		char *first_word;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			len++;
			i++;
		}
		first_word = malloc(sizeof(char) * (len + 1));
		i = i - len;
		while (fw_i < len)
		{
			first_word[fw_i++] = str[i++];
		}
		first_word[fw_i] = '\0';
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i])
		{
			if (((str[i] == ' ' || str[i] == '\t') && (str[i+1] >= 33 && str[i+1] <= 126))\
			|| ((str[i] >= 33 && str[i] <= 126) && str[i+1] == '\0'))
				write(1, " ", 1);
			else if (str[i] >= 33 && str[i] <= 126)
				write(1, &str[i], 1);
			i++;
		}
		i = 0;
		while (first_word[i])
			write(1, &first_word[i++], 1);
		free(first_word);
	}
	write(1, "\n", 1);
	return (0);
}