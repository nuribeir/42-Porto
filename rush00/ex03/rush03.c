/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:57:30 by nuriber          #+#    #+#             */
/*   Updated: 2023/03/11 20:39:13 by carolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int     j;

        j = 0;
        while (j < y)
        {
                i = 0;
                while (i < x)
                {
                        if (i == 0 && (j == 0 || j == y -1))
                                ft_putchar('A');
                        else if ( i == x - 1 && (j == 0 || j == y -1))
                                ft_putchar('C');
                        else if (i == 0 || j == 0 || i == x - 1 || j == y - 1)
                                ft_putchar('B');
                        else
                                ft_putchar(' ');
                        i++;
                }
                j++;
                ft_putchar('\n');
        }
}
