#include <stdio.h>
/**
 *main - Entry point
 *
 *Return #: Always 0 (Success)
 */
int main(void)
{
int inc;
unsigned long n1 = 0, n2 = 1, n3;
for (inc = 0; inc < 50; inc++)
{
n3 = n1 + n2;
print("%lu", n3);
n1 = n2;
n2 = n3;

if (inc == 49)
printf("\n");
else
printf(", ");

}

return (0);
}
