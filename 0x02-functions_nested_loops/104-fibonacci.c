#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int a1 = 1, a2 = 0, a3 = 0;
unsigned long int b1 = 2, b2 = 0, b3 = 0;
unsigned long int c1 = 0, c2 = 0, c3 = 0;
unsigned long int count = 98, k;
printf("%lu, %lu", a1, b1);
for (k = 2; k < count; k++)
{
c1 = (a1 + b1) % 1000000000;
c2 = a2 + b2 + (a1 + b1) / 1000000000;
c3 = a3 + b3 + c2 / 1000000000;
c2 = c2 % 1000000000;
a1 = b1;
a2 = b2;
a3 = b3;
b1 = c1;
b2 = c2;
b3 = c3;
if (c3 > 0)
{
printf(", %lu%09lu%09lu", c3, c2, c1);
}
else if (c2 > 0)
{
printf(", %lu%09lu", c2, c1);
}
else
{
printf(", %lu", c1);
}
}
printf("\n");
return (0);
}
