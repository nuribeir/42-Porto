/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

int ft_strlen (char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int temp;
    int size = ft_strlen(str) - 1;

    while (str[i] && i < size)
    {
        temp = str[i];
        str[i] = str[size];
        str[size] = temp;
        i++;
        size--;
    }
    return (str);
}

/*
#include <stdio.h>

int main(void)
{
    char a[] = "a minha casa";
    printf("%s\n", a);
    printf("%s\n", ft_strrev(a));
}
*/

/* 
*** OUTRA ALTERNATIVA ***
char *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	len = 0;
	while (str[len])
		len++;
	i = -1;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}
*/
