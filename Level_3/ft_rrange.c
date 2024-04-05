/*
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*range;
	int size;

	size = start - end;
	if (size < 0)
		size *= -1;
	size += 1;
	range = malloc(sizeof(int) * size);
	int i = 0;
	while (size > i)
	{
		range[i] = end;
		if (end < start)
			end += 1;
		else
			end -= 1;
		i++;
	}
	return (range);
}


int main()
{
	int *range = ft_rrange(-5, 8);
	int size = 14;
	int i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	
}