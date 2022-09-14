#include "main.h"
/**
 * print_sign - main function
 *
 * @n: character to compare
 *
 * Return 1 if positive -1 if negative and 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	_putchar ('-');
	return (-1);
}
