#include <main.h>
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for  (i = 0; i <= 10; i++)
	{
		for (ch = "a"; ch <= "z"; ch++)
		{
			_putchar(ch);
		}
		putchar("\n");
	}
	return (0);
}
