#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int i = 1, j = 2, sum = 0;

while (j <= 4000000)
{
if (j % 2 == 0)
sum += j;
i = j;
j = i + j;
}
printf("%lu\n", sum);
return (0);
}
