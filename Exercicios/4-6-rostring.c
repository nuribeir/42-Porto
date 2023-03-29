/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

*/

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*mot;
	int		i;
	int		d;
	int		k;

	i = 0;
	k = 0;
	mot = NULL;
	if (argc > 1)
	{
		while (argv[1][i] && (argv[1][i] == ' '
					|| argv[1][i] == '\t' || argv[1][i] == '\n'))
			i++;
		d = i;
		while (argv[1][i] && argv[1][i] != ' '
				&& argv[1][i] != '\t' && argv[1][i] != '\n')
		{
			k++;
			i++;
		}
		mot = (char*)malloc(sizeof(char) * k + 1);
		i = 0;
		while (i < k)
		{
			mot[i] = argv[1][d + i];
			i++;
		}
		mot[k] = '\0';
		i = d + k;
		while (argv[1][i] && (argv[1][i] == ' '
					|| argv[1][i] == '\t' || argv[1][i] == '\n'))
			i++;
		d = 0;	
		while (argv[1][i])
		{
			if (d == 1 && argv[1][i] != ' ' &&
					argv[1][i] != '\t' && argv[1][i] != '\n')
			{
				write(1, " ", 1);
				write(1, &argv[1][i], 1);
				d = 0;
			}
			else if (d == 0 && argv[1][i] != ' ' &&
					argv[1][i] != '\t' && argv[1][i] != '\n')
				write(1, &argv[1][i], 1);
			else
				d = 1;
			i++;
		}
		if (i > k)
			write(1, " ", 1);
		ft_putstr(mot);
		free(mot);
	}
	write(1, "\n", 1);
	return (0);
}


/*
Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring | cat -e
$
$>
*/

/*
// *** OUTRA ALTERNATIVA ***
#include <unistd.h>

int		issp(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

int		main(int ac, char **av)
{
	int		i;
	int		firstwordstart;
	int		fwlen;

	if (ac > 1)
	{
		firstwordstart = 0;
		while (issp(av[1][firstwordstart]) && av[1][firstwordstart] != '\0')
			firstwordstart++;
		fwlen = 0;
		while (!issp(av[1][firstwordstart + fwlen]))
			fwlen++;
		i = firstwordstart + fwlen;
		while (av[1][i] != '\0')
		{
			while (issp(av[1][i]) && av[1][i] != '\0')
				i++;
			if (av[1][i] == '\0')
				break;
			if (ac == 0)
				write(1, " ", 1);
			ac = 0;
			while (!issp(av[1][i]))
			{
				write(1, av[1] + i++, 1);
			}
		}
		if (fwlen && ac == 0)
			write(1, " ", 1);
		write(1, av[1] + firstwordstart, fwlen);
	}
	write(1, "\n", 1);
	return (0);
}
*/