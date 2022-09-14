#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main program prints lowercase and upper case alphabet
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
