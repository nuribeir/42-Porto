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

void	ft_swap(int *a, int *b) 
{
	int temp;
    
    temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int     main(void)
{
    int a = 10;
    int b = 99;

    printf("a = %d\t b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("a = %d\t b = %d\n", a, b);   
}
*/