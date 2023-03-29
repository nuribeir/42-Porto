/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new;

	new = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (new == 0)
		return (0);
	return (ft_strcpy(new, src));
}

/*
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src);

int main(void) {
	char *comp = "Bom dia";
	char *test1 = "Vou passar este teste!\n";
	char *test2 = ft_strdup(test1);

	printf("%s\n", ft_strdup(comp));
	printf("test1: %s", test1);
	printf("test2: %s", test2);
	return 0;
}
*/

/*
*** OUTRA ALTERNATIVA ***
char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*strcpy;

	len = 0;
	while (src[len])
		len++;
	strcpy = malloc(sizeof(char) * (len + 1));
	if (strcpy != 0)
	{
		i = 0;
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
*/