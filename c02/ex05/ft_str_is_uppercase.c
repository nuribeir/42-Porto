/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:29:03 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/15 17:36:08 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
    char *str1 = "SUP";
    char *str2 = "suP";
    char *str3 = "";

    printf("String '%s' is uppercase: %d\n", str1, ft_str_is_uppercase(str1));
    printf("String '%s' is uppercase: %d\n", str2, ft_str_is_uppercase(str2));
    printf("String '%s' is uppercase: %d\n", str3, ft_str_is_uppercase(str3));

    return 0;
}
*/
