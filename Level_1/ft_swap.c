/* 
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
*/

// void	ft_swap(int *a, int *b)
// {
// 	int tmp;
// 	tmp = *a;
// 	*a = *b;
// 	*b = tmp;
// }

//maybe this variant also is valid?
// void	ft_swap(int *a, int *b)
// {
// 	int *tmp;
// 	tmp = a;
// 	a = b;
// 	b = tmp;
// }
#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    printf("Before swap: arr1[0] = %d, arr2[0] = %d\n", arr1[0], arr2[0]);

    ft_swap(arr1, arr2);

    printf("After swap: arr1[0] = %d, arr2[0] = %d\n", arr1[0], arr2[0]);

    return 0;
}