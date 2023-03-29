/*
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/

#include <stdio.h>
#include <unistd.h>

int is_power_of_2(unsigned int n)
{
	if (n == 2 || n == 1)
		return (1);
	if (n == 0)
		return (0);
	//while (n % 2 == 1)
	//	return (0);
	while (n > 2)
	{
		if (n % 2 == 1)
			return (0);
		n = n / 2;
	}
	return (1);
}


int main(void)
{
	unsigned int num[7];
	num[0] = 0;
	num[1] = 200;
	num[2] = 32;
	num[3] = 256;
	num[4] = 2147483647; // defenicao de int minimo +1
	num[5] = 1000;
	num[6] = 1024;
	int i;

	i = 0;
	while(i <= 6)
	{
	if (is_power_of_2(num[i]))
		printf("%s %d\n", "yep", num[i]);
	else
		printf("%s %d\n", "nope", num[i]);
	i++;
	}
}


/*
// *** OUTRA ALTERNATIVA 1 ***
int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}
*/

/*
// *** OUTRA ALTERNATIVA 2 ***
int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return ((n & (-n)) == n ? 1: 0);
}
*/