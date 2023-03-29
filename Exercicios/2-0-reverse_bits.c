
/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100

*/

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res = 0;
	int i = 8;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>

int     main()
{
	printf("%d", reverse_bits(38));
	return (0);
}
*/

/* ******************************************
** echo 00100110 | perl -lpe '$_=pack"B*",$_'
** echo "d" | perl -lpe '$_=unpack"B*"'
** ;; Convert binary to ascii with perl;
**
** echo "&" | perl -lpe '$_=unpack"B*"'
** echo 01100100 | perl -lpe '$_=pack"B*",$_'
** ;; Use perl to convert ascii char to binary
**
** echo "&" | perl -lpe '$_=unpack"B*"' && echo "d" | perl -lpe '$_=unpack"B*"'
** ;; See the bits reversed more easily 
** ****************************************** */
