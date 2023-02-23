#include "main.h"
/**
 * print_number - prints an integer
 * @n: numeber to print
 * Return: void
 */
void print_number(int n)
{
int i = 1000000000;
if (n < 0)
{
_putchar('-');
n *= -1;
}
while (i > n)
{
i /= 10;
}
while (i > 0)
{
_putchar((n / i) + '0');
}
}
