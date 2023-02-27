#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
if (n > 0)
printf("%d", a[i++]);
while (i < n)
{
printf(", %d", a[i++]);
}
printf("\n");
}
