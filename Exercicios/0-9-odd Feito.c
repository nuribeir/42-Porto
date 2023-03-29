/*
// *** EXERCICIO NO MEU EXAME ***
Escreve um programa que exibe todos digitos impares de 0 a 10
seguidos de \n. Usar função write
File odd.c
*/

#include <unistd.h>

int main(void)
{
        write (1,"13579\n", 6);
}

// *** OUTRAS ALTERNATIVAS ***
/*
#include <unistd.h>

int main(void)
{
        int nb;

        nb = 1;
        while (nb <= 9)
        {
            write (1, &"0123456789"[nb], 1);
            nb = nb + 2;
        }
        write (1, "\n", 1);
}
*/

/*
#include <unistd.h>

int main(void) 
{
    char impar[] = {'1', '3', '5', '7', '9'};
    int i = 0;
    while (i <= 10) 
    {
        if (i % 2 != 0)
        {
            write(1, &impar[i/2], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
*/