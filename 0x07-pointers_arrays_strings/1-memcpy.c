#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy from src to dest
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
