#include "main.h"
/**
 * print_diagonal - prints a diagonal line of n length
 * @n: number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n && n > 0; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
