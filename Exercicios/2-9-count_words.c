/*
// *** EXERCICIO NO MEU EXAME ***
Escreve uma função que recebe uma string, a divide em palavras
e retorna um inteiro que representa o numero de palavras.
Uma “palavra" é um aparte da string, delimitada por espaços
ou incio/fim da string.

int cont_words(char *str);
*/

#include <stdio.h>

int cont_words(char *str) 
{
    int i = 0;
    int count = 0;
    int in_word = 0;

    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') 
        {
            if (!in_word) 
            {
                in_word = 1;
                count++;
            }
        } 
        else
            in_word = 0;
        i++;
    }

    return count;
}


int main(void) 
{
    char a[] = " Este é um exemplo de frase com algumas palavras. ";
    printf("Numero de palavras: %d\n",cont_words(a));
    return 0;
}

/*
// *** EXPLICAÇÃO ***

A função cont_words recebe uma string str como entrada e retorna
um inteiro que representa o número de palavras na string.

A variável count é inicializada como 0 e será usada para contar
o número de palavras. A variável in_word é inicializada como 0 e é
usada para indicar se o caractere atual está dentro de uma palavra ou não.

Em seguida, um loop while é usado para percorrer a string.
A condição de parada é o caractere nulo (\0), que indica o final da string.

Se o caractere atual não é um espaço em branco (' ', '\t' ou '\n'),
então verificamos se já estamos dentro de uma palavra (in_word == 1).
Se não estivermos dentro de uma palavra, definimos in_word como 1
(indicando que agora estamos dentro de uma palavra) e incrementamos
count em 1 (porque encontramos uma nova palavra).
Se já estivermos dentro de uma palavra, não fazemos nada.

Se o caractere atual for um espaço em branco, definimos in_word como 0 
(indicando que agora estamos fora de uma palavra).

Depois de percorrer toda a string, retornamos o valor de count.
*/




