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
*/

#include <stdio.h>
#include <stdlib.h>

int ft_absoluto (int x)
{
    if (x < 0)
        return (-x);
    return (x);
}

int *ft_rrange (int inicio, int fim)
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
            tab[i] = fim; // alterar p o oposto no ft_range
            fim--; // alterar p o oposto no ft_range
            i++;
        }
    }    
    else if (inicio > fim) // numeros negativos
    {    
        while (i<size)
        {
            tab[i] = fim; // alterar p o oposto no ft_range
            fim++; // alterar p o oposto no ft_range
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
	prt = ft_rrange(1, 3);
	while(i <= 2)
	{
		printf("[%d] ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(-1, 2);
	while(i <= 3)
	{
		printf("[%d] ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, 0);
	while(i <= 0)
	{
		printf("[%d] ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, -3);
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

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

/*
// *** OUTRA ALTERNATIVA ***
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *rrange;
	int i = 0;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	while (start != end)
	{
		rrange[i++] = end;
		end -= (start > end) ? -1 : 1;
	}
	rrange[i] = end;
	return (rrange);
}
*/