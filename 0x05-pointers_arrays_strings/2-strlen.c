#include "main.h"
/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: lenght of string
 */
int _strlen(char *s)
{
	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
