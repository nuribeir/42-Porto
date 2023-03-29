/* 
// *** EXERCICIO NO MEU EXAME ***
a função ft_add que recebe um ponteiro para inteiro ptr e 
um inteiro n, e adiciona o valor de n ao valor apontado por ptr.

void ft_add(int *ptr, int n)
*/

#include <unistd.h>
#include <stdio.h>

void ft_add(int *ptr, int n)
{
    *ptr += n; // *ptr = *ptr + n
}
/*
int main() 
{
    int nb = 5;
    int increment = 3;

    printf("Antes da soma: %d\n", nb);
    ft_add(&nb, increment);
    printf("Depois da soma: %d\n", nb);
    return 0;
}
*/
/*
// *** EXERCICIO DE OUTRO EXAME ***
void ft_add (int *ptr)
{
    *ptr += 1;
}

int main()
{
    int nb = 5;

    printf("Antes da soma: %d\n", nb);
    ft_add(&nb);
    printf("Depois da soma: %d\n", nb);
    return 0;
}
*/

/*
void ft_ft (int *nbr)   //  c01 ex00
{
    *nbr = 42;
}

int main()
{
    int a;
    a = 23;
    int *ptr;    // int *ptr = &a;
    ptr = &a;
    printf("%d\n", a);
    ft_ft (&a);
    printf("%d\n", a);
    return 0;
}
*/
