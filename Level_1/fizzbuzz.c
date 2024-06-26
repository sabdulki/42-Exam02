/* Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/

#include <unistd.h>

void write_nbr(int n)
{
	char res;
	if (n < 10)
	{
		res = n + '0';
		write(1, &res, 1);
	}
	else 
	{
		// n = n / 10 + '0';
		// res = n % 10 + '0';
		write_nbr(n /10);
		write_nbr(n % 10);
		// write(1, &res, 1);
	}
}

void put_nbr(int n)
{
	char *str = "0123456789";
	if (n >= 10)
		put_nbr(n / 10);
	write(1, &str[n % 10], 1);
}

int main(void)
{
	int i = 1;
	while(i < 101)
	{	
		if (i % 4 == 0 && i % 7 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 7 == 0)
			write(1, "buzz", 4);
		else if (i % 4 == 0)
			write(1, "fizz", 4);
		else
			put_nbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}