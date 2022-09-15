#include <stdio.h>
/**
 * main- Funtion to print numbers in asceding order
 * return: Always (0)  Success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 0; n++)
	{
		putchar((n % 10) + '0');
		if (n != 9)
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');

	return (0);
}
