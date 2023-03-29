/*
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
*/

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
#include <stdio.h>

int main(void)
{
    char inicio[] = "primeiro";
    char fim[] = "ultimo";

    printf("inicio --> %s\n", inicio);
    printf("fim --> %s\n", fim);
    ft_strcpy(fim, inicio);
    printf("fim --> %s\n", fim);
    return (0);
}
*/