#include "main.h"
/**
 * print_diagonal - prints a diagonal line of n length
 * @n: number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
int i;
for (i = 0; i < n && n > 0; i++)
{
int j;
for (j = 0; j < i+1; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
