#include "main.h"
/**
 * _islower - Main function
 *
 * @c: character to compare
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
