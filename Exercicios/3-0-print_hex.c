/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.
*/

#include <unistd.h>

void print_hex(int p)
{
	char *str = "0123456789abcdef";
  
	if (p == 0)
		write (1, "0", 1);
	while (p)
	{
		write(1, &str[p % 16], 1);
		p  = p / 16;
	}
}

int ft_atoi(char *str)
{
	int result;
	int sinal;

	result = 0;
	sinal = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;

	if (*str == '-' || *str == '+')
    {
        if (*str == '-')
		    sinal = -1 * sinal;
		str++;
    }
    while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sinal * result);
}

int main(int ac, char *av[])
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}

/*
Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/