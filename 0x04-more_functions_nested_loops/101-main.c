#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  print_number(98);
  _putchar('\n');
  print_number(402);
  _putchar('\n');
  print_number(1024);
  _putchar('\n');
  print_number(0);
  _putchar('\n');
  print_number(-98);
  _putchar('\n');
  print_number(-0);
  _putchar('\n');
  print_number(2147483647);
  _putchar('\n');
  print_number(-2147483647);
  _putchar('\n');
  print_number(1000000000);
  _putchar('\n');
  print_number(-2147483648);
  _putchar('\n');
  return (0);
}
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
    }else{
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
#include <stdio.h>
#include <stdlib.h>

void _putchar(char c)
{
  putchar(c);
}
