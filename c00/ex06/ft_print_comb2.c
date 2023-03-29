/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:39:19 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/13 14:32:37 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_print_comb2(void);

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print2digits(int first_number, int second_number)
{
	ft_putchar('0' + first_number / 10);
	ft_putchar('0' + first_number % 10);
	ft_putchar(' ');
	ft_putchar('0' + second_number / 10);
	ft_putchar('0' + second_number % 10);
	if (first_number != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			print2digits(first_number, second_number);
			second_number++;
		}
		first_number++;
	}
}
