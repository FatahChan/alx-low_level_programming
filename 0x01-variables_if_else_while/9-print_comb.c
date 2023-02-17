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
int c;
for (c = 0; c <= 9; c++)
{
putchar((char)(c + '0'));
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
return (0);
}
