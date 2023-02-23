#include <math.h>
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
long int largestPrimeFactor = -1, n = 612852475143;

while (n % 2 == 0)
{
  largestPrimeFactor = 2;
  n /= 2; 
}
while (n % 3 == 0)
{
largestPrimeFactor = 3;
n = n / 3;
}
int i;
for (i= 5; i <= sqrt(n); i += 6)
{
while (n % i == 0)
{
largestPrimeFactor = i;
n = n / i;
}
while (n % (i + 2) == 0)
{
largestPrimeFactor = i + 2;
n = n / (i + 2);
}
}
if (n > 4)
largestPrimeFactor = n;
return largestPrimeFactor ;
}
