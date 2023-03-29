/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.
*/

#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char c;

    c = 'a';
    while ( c < 'z')
    {
        write (1, &c, 1);
        c = c - 31;
        write (1, &c, 1);
        c = c + 33;
    }
    write (1, "\n", 1);
    return (0);
}

/*
Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

/*
// *** OUTRA ALTERNATIVA ***
int   main(void)
{
    write(1,"aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}
*/