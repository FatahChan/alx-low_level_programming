#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long i = 1, j = 2, k, count = 50;

printf("%lu, %lu, ", i, j);
for (k = 0; k < count; k++)
{
i = i + j;
printf("%lu, ", i);
j = i + j;
printf("%lu, ", j);
}
return (0);
}
