/*
Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/
#include <unistd.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
	unsigned int i;
	
	i = 0;
	if (len == 0)
		return (0);
	int max = -2147482648;  // int max = INT_MIN; usar #include <limits.h>
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int nums01[] = {-2, -3, -776, -9};
	printf("%d\n", max(nums01, 4));
	int nums02[] = {-2, 101, 23};
	printf("%d\n", max(nums02, 3));
	int nums03[] = {-2, 101, 23, 200, -2000, 4000, 3999, 89};
	printf("%d\n", max(nums03, 8));
	return (0);
}
*/

/*
// *** OUTRA ALTERNATIVA ***
int max(int *tab, unsigned int len)
{
	int max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}
*/