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
int c, d, e;
for (c = 0; c <= 9; c++)
{
for (d = 0; d <= 9; d++)
{
for (e = 0; e <= 9; e++)
{
if (c < d && d < e)
{
putchar((char)(c + '0'));
putchar((char)(d + '0'));
putchar((char)(e + '0'));
if (c != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
