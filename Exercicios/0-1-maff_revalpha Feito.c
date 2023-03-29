/*
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.
*/

#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char c;

    c = 'z';
    while ( c > 'a')
    {
        write (1, &c, 1);
        c = c - 33;
        write (1, &c, 1);
        c = c + 31;
    }
    write (1, "\n", 1);
    return (0);
}

/*
Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

/*
// *** OUTRA ALTERNATIVA ***
int main(void)
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
}
*/