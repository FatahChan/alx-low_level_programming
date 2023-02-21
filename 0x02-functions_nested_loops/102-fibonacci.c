#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long long i = 1, j = 2, k, count = 50;

printf("%llu, %llu, ", i, j);
for (k = 2; k < count; k+=2)
{
i = i + j;
printf("%llu, ", i);
j = i + j;
printf("%llu, ", j);
}
return (0);
}