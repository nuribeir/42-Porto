/*
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.
*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char nb;

    nb = '9';
    while (nb >= '0')
    {
        write (1, &nb, 1);
        nb--;
    }
    write(1, "\n", 1);
    return (0);
}

/*
Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/

/*
// *** OUTRA ALTERNATIVA ***
int	main(void)
{
	write(1, "9876543210\n", 11);
}
*/