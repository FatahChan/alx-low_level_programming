#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer to a string
 * Return: void
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
if (str[i+1] != '\0')
break;
i+=2;
}
_putchar('\n');
}
