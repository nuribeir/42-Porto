/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char const *av[])
{
	int nbr_1;
	int nbr_2;

	if (ac == 3)
	{
		if ((nbr_1 = atoi(av[1])) > 0 && (nbr_2 = atoi(av[2])) > 0)
		{
			while (nbr_1 != nbr_2)
			{
				if (nbr_1 > nbr_2)
					nbr_1 = nbr_1 - nbr_2;
				else
					nbr_2 = nbr_2 - nbr_1;
			}
			printf("%d", nbr_1);
		}
	}
	printf("\n");
	return (0);
}

/*
Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e 
1$
$> ./pgcd | cat -e
$
*/