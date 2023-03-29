/*
// *** EXERCICIO NO MEU EXAME ***
// *** EXERCICIO IGUAL AO C00 ex07 ***
  Files to turn in : ft_putnbr.c
  Allowed functions : write
  Create a function that displays the number entered as a parameter.
  The function has to be able to display all possible values within an
  int type variable.
  Here’s how it should be prototyped :
    void ft_putnbr(int nb);

  For example:
  ft_putnbr(42) displays "42".
*/

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
        write (1, "-2147483648",11);
    else if (nb < 0)
    {
        write (1, "-", 1);
        nb = -nb;
        ft_putnbr (nb);
    }
    else if (nb > 9)
    {
        ft_putnbr (nb / 10);
        ft_putnbr (nb % 10);
    }
    else 
        write (1, &"0123456789"[nb % 10], 1);
}

int main(void)
{
    int max = INT_MAX;
    int min = INT_MIN;
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(105);
    write(1, "\n", 1);    
    ft_putnbr(-105);
    write(1, "\n", 1);
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(min);
    write(1, "\n", 1);
    ft_putnbr(max);
    write(1, "\n", 1);
}