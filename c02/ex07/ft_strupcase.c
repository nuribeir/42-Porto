/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:24:29 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/16 11:03:21 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}		
/*
int main(void)
{
    char str[] = "ola tudo bem";
    char *result = ft_strupcase(str);

    printf("Original string: %s\n", str);
    printf("Uppercase string: %s\n", result);

    return 0;
}
*/
