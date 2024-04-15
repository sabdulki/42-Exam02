/*
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int tmp;
	while (i < (size-1))
	{
		if (tab[i] > tab[i+1])
		{
			tmp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	// i = 0;
	// while(i < size)
	// {
	// 	printf("%d ", tab[i]);
	// 	i++;
	// }
}

// int main()
// {
// 	int i = 0;
// 	int arr[] = {1, 3, 8, 5, 2};
// 	int size = 5;
// 	int *tab = arr;
	
// 	while(i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	sort_int_tab(tab, size);
// }