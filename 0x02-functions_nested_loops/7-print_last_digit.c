#include "main.h"
#include "_abs.c"
/**
 * print_last_digit - Mian function
 * 
 * @n: integer to get last digit of
 * Return last digit of n
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
