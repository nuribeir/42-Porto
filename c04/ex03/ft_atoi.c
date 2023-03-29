/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:49:30 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/23 16:50:26 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while ((7 <= str[i] && str[i] <= 13) || str[i] == 32)
			i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			s *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		r *= 10;
		r += str[i] - 48;
		i++;
	}
	return (r * s);
}

int main()
{
        char *testamento = "                    +++--+-+165gf489765";
        printf("%d\n", ft_atoi(testamento));
}
