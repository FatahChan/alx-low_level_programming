#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long long i = 1, j = 2, k, count = 50;
printf("%d, %d, ", i, j);
for (k = 0; k < count; k++)
{
i = i + j;
printf("%lld, ", i);
j = i + j;
printf("%lld, ", j);
}
return (0);
}
