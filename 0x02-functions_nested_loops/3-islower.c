#include "main.h"
/**
 * main- islower
 *
 * @c: character to compare
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
