#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Nothing
 */
int main(void)
{
	int counter = 2;

	int a = 1;
	int b = a + 1;
	int c = a + b;

	printf("%d, ", a);
	printf("%d, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%d", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
