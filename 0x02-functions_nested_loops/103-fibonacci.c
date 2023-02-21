#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int i = 1, j = 2, sum = 3;

while (i <= 4000000)
{
    i = j + i;
    j = i + j;    
    sum += i + j;
}
printf("%lu\n", sum);
return (0);
}
