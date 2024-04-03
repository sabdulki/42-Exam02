/* Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>
// #include <stdio.h>



/*алгоритм такой:
	1. скип все пробелы в начале
	2. выводить буквы, пока счетчик не равен пробелу или табу
*/



// int main(int ac, char** av)
// {
// 	if (ac != 2 || av[1] == NULL)
// 	{
// 		write(1, "\n", 1);
// 		return (0);
// 	}

// 	int i = 0;
// 	int inn_ctn = 0;
// 	while(av[1][i])
// 	{
// 		if (((av[1][0] != 32 || av[1][0] != 9) && (av[1][i+1] != 32 || av[1][i+1] != 9)) \
// 			|| ((av[1][i] == 32 || av[1][i] == 9) && (av[1][i+1] != 32 || av[1][i+1] != 9)))
// 		{
// 			i++;
// 			while(av[1][i + inn_ctn] != 32 || av[1][i + inn_ctn] != 9)
// 			{
// 				write(1, &av[1][inn_ctn], 1);
// 				inn_ctn++;
// 			}
// 		}
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

int main (int argc, char** argv)
{
	int i = 0;
	if (argc == 2)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while((argv[1][i]) && (argv[1][i] != ' ' && argv[1][i] != '\t'))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}