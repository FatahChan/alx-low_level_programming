#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int i = 1, j = 2, k, count = 50;

printf("%lu, %lu, ", i, j);
for (k = 2; k < count; k += 2)
{
i = i + j;
printf("%lu, ", i);
j = i + j;
printf("%lu", j);
if (k < count - 2)
{
printf(", ");
}
}
printf("\n");
return (0);
}
