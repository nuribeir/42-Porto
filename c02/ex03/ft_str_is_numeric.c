/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:10:59 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/16 19:16:42 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
    char *str1 = "839134";
    char *str2 = "asjn88";

    int result1 = ft_str_is_numeric(str1);
    int result2 = ft_str_is_numeric(str2);

    printf("ft_str_is_numeric(%s) = %d\n", str1, result1);
    printf("ft_str_is_numeric(%s) = %d\n", str2, result2);

    return 0;
}*/
