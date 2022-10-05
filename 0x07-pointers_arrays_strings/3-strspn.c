#include "main.h"
#include <stdio.h>

/**
 * *_strspn - gets the length of a prefix substring
 * @s: strings to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: returns unsigned value
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
		}
		if (s[j] == '\0')
			return (result);
	}
	return (result);
}
