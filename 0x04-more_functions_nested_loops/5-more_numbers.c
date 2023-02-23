#include "main.h"
/**
 * more_numbers - most numbers followed by a new line
 * Return: void
 */
void more_numbers(void)
{
int i, j;
for (j = 0; j < 11; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar('1');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
