/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:14:07 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/20 18:27:58 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write (1, &str[a], 1);
		a++;
	}
}
/*
int     main(void)
{
    char str[] = "buenaas";
    ft_putstr(str);
    return 0;
}*/
