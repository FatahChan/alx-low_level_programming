#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long long i = 1, j = 2, k, count = 50;

printf("%lld, %lld, ", i, j);
for (k = 2; k < count; k+=2)
{
i = i + j;
printf("%lld, ", i);
j = i + j;
printf("%lld, ", j);
}
return (0);
}