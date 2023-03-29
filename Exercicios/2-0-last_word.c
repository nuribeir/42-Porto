/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.
*/

#include <unistd.h>

void	last_word(char *str)
{
	int	j;
	int i;

	i = 0;
	j = 0;
	while (str[i])  
	{               
		if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] >= 33 && str[i + 1] <= 126))
			j = i + 1;
		i++;        
	}               
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	return (0);
}

/*
Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

/*
// *** OUTRA ALTERNATIVA ***
void	last_word(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while(str[i] == ' ' || str[i] == '\t')
		i--;
	while (i > 0)
	{	if(str[i] == ' ' && str[i] == '\t')
			break;
		i--;
	}
	i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}
*/