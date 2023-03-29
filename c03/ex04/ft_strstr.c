/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:33:43 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/21 16:17:33 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int main(void) 
{
    char str1[] = "7821bsa8? ";
    char str2[] = "sa8? ";
    char *result;

    result = ft_strstr(str1, str2);
    if (result == NULL) {
        printf("'%s' not found in '%s'\n", str2, str1);
    } else {
        printf("'%s' found in '%s' at index %ld\n", str2, str1, result - str1);
    }

    return 0;
}*/
