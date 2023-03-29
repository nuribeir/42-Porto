/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
*/

#include <unistd.h>
#include <stdio.h>

int check_doubles_2 (char *str, char c)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return 0;
        i++;
    }
    return (1);
}

int check_doubles_1 (char *str, char c, int len)
{
    int i;
    
    i = 0;
    while ( i < len)
    {
        if (str[i] == c)
            return 0;
        i++;
    }
    return (1);
}

void ft_union (char *str1, char *str2)
{
    int i;

    i = 0;
    while (str1[i] != '\0')
    {
        if (check_doubles_1 (str1, str1[i], i) == 1)
            write (1, &str1[i], 1);
        i++;
    }

    i = 0;
    while (str2[i] != '\0')
    {
        if (check_doubles_2 (str1, str2[i]) == 1)
            if (check_doubles_1 (str2, str2[i], i) == 1)
                write (1, &str2[i], 1);
        i++;
    }
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

/*
Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

/*
// *** OUTRA ALTERNATIVA ***
#include <unistd.h>

int		not_seen_before(char *s, int max_pos, char c)
{
	int	i;

	i = -1;
	while(++i < max_pos)
		if (s[i] == c)
			return (0);
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i])
		if (not_seen_before(s1, i, s1[i]))
			write(1, &s1[i], 1);
	j = -1;
	while (s2[++j])
		if (not_seen_before(s1, i, s2[j]) & not_seen_before(s2, j, s2[j]))
			write(1, &s2[j], 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
*/