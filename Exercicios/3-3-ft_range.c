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
*/

#include <stdio.h>
#include <stdlib.h>

int ft_absoluto (int x)
{
    if (x < 0)
        return (-x);
    return (x);
}

int *ft_range (int inicio, int fim)
{
    int i;
    int size;
    int *tab;

    i = 0;
    size = ft_absoluto (fim - inicio) + 1;
    tab = (int*)malloc (sizeof(int) * size);
    if (!tab)
        return 0;
    if (size == 1) // apenas 1 numero
        tab[i] = inicio;
    if (inicio < fim) // numeros positivos
    {    
        while (i<size)
        {
            tab[i] = inicio; // alterar p o oposto no ft_rrange
            inicio++; // alterar p o oposto no ft_rrange
            i++;
        }
    }    
    else if (inicio > fim) // numeros negativos
    {    
        while (i<size)
        {
            tab[i] = inicio; // alterar p o oposto no ft_rrange
            inicio--; // alterar p o oposto no ft_rrange
            i++;
        }
    }
    return tab;
}

/*
int main(void)
{
	int i;
	int *prt;

	i = 0;
	prt = ft_range(1, 3);
	while(i <= 2)
	{
		printf("[%d] ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_range(-1, 2);
	while(i <= 3)
	{
		printf("[%d] ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_range(0, 0);
	while(i <= 0)
	{
		printf("[%d] ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_range(0, -3);
	while(i <= 3)
	{
		printf("[%d] ", prt[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/

/*
Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

/*
// *** OUTRA ALTERNATIVA ***
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	*s;

	n = max >= min ? max - min : min - max;
	if (!(s= (int *)malloc(sizeof(int) * (n))))
		return (NULL);
	while (max != min)
		*s++ = max > min ? min++ : min--;
	*s = min;
	return (s - n);
}
*/