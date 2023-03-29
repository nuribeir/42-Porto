/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:24:09 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/15 17:28:27 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
    char *str1 = "hello";
    char *str2 = "HeLLo";
    char *str3 = "";

    printf("String '%s' is lowercase: %d\n", str1, ft_str_is_lowercase(str1));
    printf("String '%s' is lowercase: %d\n", str2, ft_str_is_lowercase(str2));
    printf("String '%s' is lowercase: %d\n", str3, ft_str_is_lowercase(str3));

    return 0;
}
*/
