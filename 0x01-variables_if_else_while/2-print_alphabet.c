#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function prints out alphabet
 *
 * Return : Alyways 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
