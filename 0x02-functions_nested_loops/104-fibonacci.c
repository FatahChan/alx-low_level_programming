#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{
unsigned long int a = 1, b = 2, c, i;
printf("%lu, %lu, ", a, b);
for(i = 2; i <= 98; i++)
{
c = a + b;
printf("%lu, ", c);
a = b;
b = c;
}
printf("%lu\n", a + b);
return 0;
}
