#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to a string
 * Return: integer
 */
int _atoi(char *s)
{
int i = 0;
int numberFound = 0;
int sign = 1;
int power = 1;
int result = 0;
while (s[i] != '\0')
{
if (numberFound == 0 && s[i] == '-')
{
sign *= -1;
}
if (s[i] >= '0' && s[i] <= '9')
{numberFound = 1;

result = result *power + (s[i] - '0') * sign;
power = 10;
}
if (numberFound == 1 && (s[i] < '0' || s[i] > '9'))
{
break;
}
i++;
}
return (result);
}
