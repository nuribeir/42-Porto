/*
// *** EXERCICIO NO MEU EXAME ***
criar uma função em C que percorre a string
e conta o número de caracteres até encontrar
a primeira ocorrência de 'a', ou o final da string,
o que ocorrer primeiro.

int count_alen(char *str)
*/

#include <stdio.h>
#include <string.h>

int count_alen(char *str)
{
    int i;
    int len; 
    
    i = 0;
    len = 0;
    while (str[i] && str[i] != 'a') 
    {
        len++;
        str++;
    }
    return (len);
}

int main(void) 
{
    char str1[] = "hello world";
    char str2[] = "banana";
    char str3[] = "";
    
    printf("str1: %d\n", count_alen(str1));
    printf("str2: %d\n", count_alen(str2));
    printf("str3: %d\n", count_alen(str3));
    
    return (0);
}