#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int i = 1, j = 2, k, sum = 2;

for (k = 2; k < 98; k += 2)
{
j = i + j;
if (j % 10 == 1 || j % 10 == 2)
printf("%lu, ", j);
i = j - i;
}
printf("%lu\n", sum);
return (0);
}
