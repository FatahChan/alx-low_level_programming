#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, d;
for (c = 0; c <= 9; c++)
{
for (d = 0; d <= 9; d++)
{
if (c < d)
{
putchar((char)(c + '0'));
putchar((char)(d + '0'));
if (c != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
