#include "main.h"
/**
 * print_to_98 - prints n to 98
 * @n: starting number
 * Return: void
 */
void print_to_98(int n)
{
if (n < 98)
{
for (; n < 98; n++)
{
int i = n;
while (i > 0)
{
_putchar(i % 10 + '0');
i /= 10;
}
_putchar(',');
_putchar(' ');
}
}
else
{
for (; n > 98; n--)
{
int i = n;
while (i > 0)
{
_putchar(i % 10 + '0');
i /= 10;
}
_putchar(',');
_putchar(' ');
}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
