#include "main.h"
/**
 * print_line - prints a line of n length
 * @n: number of times to print _
 * Return: void
 */
void print_line(int n)
{
int i;
for (i = 0; i < n && n > 0; i++)
{
_putchar('_');
}
_putchar('\n');
}
