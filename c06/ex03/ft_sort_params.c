/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:54:27 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/28 10:41:00 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			write (1, &av[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	c;

	c = -1;
	if (ac < 2)
		return (0);
	while (av[++c + 1])
	{
		if (ft_strcmp(av[c], av[c + 1]) > 0)
		{
			char *tmp;

			tmp = av[c + 1];
			av[c + 1] = av[c];
			av[c] = tmp;
			c = -1;
		}
	}
	print_params(av);
	return (0);
}
