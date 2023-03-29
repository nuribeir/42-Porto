/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:03:58 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/22 10:12:44 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int numbr)
{
	if (numbr < -9 || numbr > 9)
		ft_putnbr (numbr / 10);
	if (numbr < 0)
	{
		if (numbr >= -9)
		{
			ft_putchar('-');
		}
		ft_putchar('0' - (numbr % 10));
	}
	else
	{
		ft_putchar('0' + (numbr % 10));
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(1020);
	write(1, "\n", 1);
	ft_putnbr(-1234);
}*/
