/*
Assignment name  : aff_z
Expected files   : aff_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.
*/

#include <stdio.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == 'z')
			{
				write(1, "z\n", 2);
				break;
			}
			i++;
		}
		write(1, "z\n", 2);
		return (0);
	}
    else
	    write(1, "z\n", 2);
    return (0);        
}

/*
Example:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$
*/

/*
// *** OUTRA ALTERNATIVA ***
int		main(void)
{
	write(1, "z\n", 2);
}
*/