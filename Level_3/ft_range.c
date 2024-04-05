/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/
#include <stdio.h>
#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int size;
	int *range;
	int i;

	i = 0;
	size = (end - start);
	if (size < 0)
		size *= -1;
	size += 1;
	range = (int *) malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	while (i < size)
	{
		range[i] = start;
		if (start < end)
			start += 1;
		else
			start -=1;
		i++;
	}
	return (range);
}

int main()
{
	int *range = ft_range(5, -9);
	int size = 15;
	int i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
}