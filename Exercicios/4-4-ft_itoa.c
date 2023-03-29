/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <stdio.h>

long int	ft_abs(long int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

int			ft_len(long int nbr)
{
	int	len;

	len = (nbr <= 0) ? 1 : 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int nbr)
{
	int		len;
	int		sign;
	char	*c;

	sign = (nbr < 0) ? -1 : 1;
	len = ft_len(nbr);
	c = (char *)malloc(sizeof(char) * len + 1);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_abs(nbr % 10);
		nbr = ft_abs(nbr / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}

/*
int main(void)
{
	printf("%s\n", ft_itoa(33));
	printf("%s\n", ft_itoa(-33));
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(98765));
	printf("%s\n", ft_itoa(-98765));
	printf("%s\n", ft_itoa(45));
	printf("%s\n", ft_itoa(-45));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	return (0);
}
*/

/*
// *** OUTRA ALTERNATIVA ***
char	*ft_itoa(int nbr)
{
	char *str;
	char *t;
	char *u;

	if (!(str = (char *)malloc(16)))
		return (NULL);
	t = str;
	(nbr < 0 ? *t++ = '-' : 1);
	if (nbr > 0)
		nbr = -nbr;
	if (nbr <= -10)
	{
		u = ft_itoa(-(nbr / 10));
		while (*u)
			*t++ = *u++;
	}
	*t = '0' - nbr % 10;
	*(t + 1) = '\0';
	return (str);
}
*/