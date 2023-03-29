/*
Assignment name  : hello
Expected files   : hello.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays "Hello World!" followed by a \n.
*/

int main(void)
{
    write (1, "Hello World!\n" , 13);
}

/*
Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>
*/