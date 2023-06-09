/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:49:43 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/26 15:49:05 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				write (1, &av[i][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
}
