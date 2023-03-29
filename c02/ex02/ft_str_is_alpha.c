/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:53:58 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/16 19:22:23 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && str[i] <= 90) \
			|| (97 <= str[i] && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
    char str1[] = "oi";
    char str2[] = "cucarcha";
    char str3[] = "1234";
    char str4[] = "";
    char str5[] = ".";

    printf("%s: %d\n", str1, ft_str_is_alpha(str1));
    printf("%s: %d\n", str2, ft_str_is_alpha(str2));
    printf("%s: %d\n", str3, ft_str_is_alpha(str3));
    printf("%s: %d\n", str4, ft_str_is_alpha(str4));
    printf("%s: %d\n", str5, ft_str_is_alpha(str5));

    return 0;
}*/
