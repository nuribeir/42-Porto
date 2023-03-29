/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.
*/

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)   // IMPORTANTE NAO TIRAR
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen (char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[j] && s1[i])
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	}
	if (i == ft_strlen(s1))
		ft_putstr(s1);
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

/*
Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/

/*
// *** OUTRA ALTERNATIVA ***
#include <unistd.h>

void ft_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i])
    {
		write(1, &str[i], 1);
        i++;
    }
}

int	main(int ac, char *av[])
{
	int i;
	int j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[2][j])
			if (av[2][j++] == av[1][i])
				i++;
		if ( ! av[1][i])
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
*/