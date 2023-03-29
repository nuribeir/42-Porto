
/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/

/*
The strcspn() function calculates the length of the initial
segment of s which consists entirely of bytes not in reject.
The strcspn() function returns the number of bytes in the
initial segment of s which are not in the string reject.
*/

#include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;
    size_t len;

    i = 0;
    len = 0;
    while (s[len])
        len++;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return (i);
                j++;
        }
        i++;
    }
    return (len);
}

/*
int main(void) {
    const char *s = "Hello, world!";
    const char *reject = " ,!"; // characters to reject
    size_t len = ft_strcspn(s, reject);
    printf("Length of initial segment of '%s' not containing any character from '%s' is %zu\n",
     s, reject, len);
    return 0;
}
*/