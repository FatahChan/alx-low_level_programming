#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void){
int i = 1, j = 2, k, count = 50;
printf("%d, %d, ", i, j);
for (k = 0; k < count; k++)
{
i = i + j;
printf("%d, ", i);
j = i + j;
printf("%d, ", j);
}
}
