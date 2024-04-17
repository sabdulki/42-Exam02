/*
Assignment name  : snake_to_camel
Expected files   : snake_to_camel.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

Examples:
$>./snake_to_camel "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		char *str = av[1];
		while (str[i])
		{
			if (str[i] == '_')
			{
				i++;
				str[i] -= 32;
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}