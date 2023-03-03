#include "main.h"
/**
 * print_number - prints an integer
 * @n: numeber to print
 * Return: void
 */
void print_number(int n)
{
	int i = 1000000000;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n = 147483648;
		}
		else
		{
			n *= -1;
		}
	}
	while (i > n)
	{
		i /= 10;
	}
	while (i > 0)
	{
		_putchar((n / i) + '0');
		n = n % i;
		i = i / 10;
	}
}
