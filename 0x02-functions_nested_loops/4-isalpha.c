#include "main.h"
/**
 * isalpha - Mian function
 *
 * Return 1 if true 0 if false
 */
int isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
