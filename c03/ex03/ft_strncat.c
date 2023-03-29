/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:58:20 by nuribeir          #+#    #+#             */
/*   Updated: 2023/03/20 11:15:36 by nuribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
	{
		dest[j + i] = src[i];
		i ++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
int main()
{
    char s1[20] = "Ola, como estas?";
    char s2[] = " Bieeen";
    ft_strncat(s1, s2, 7);
    printf("%s\n", s1); 
    return 0;
}*/
