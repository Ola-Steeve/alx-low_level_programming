#include "main.h"

/**
 * _strcat - concatenates a string
 * @dest: destination string
 * @src: source string
 * Return: on success 1
 * on error, -1
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
