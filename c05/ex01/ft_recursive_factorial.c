/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:53:53 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/24 19:47:18 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		n *= nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
		return (0);
	return (n);
}
/*
int main()
{
	printf("%d", ft_recursive_factorial(3));
}*/
