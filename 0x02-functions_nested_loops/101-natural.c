#include "main.h"
#include <stdio.h>
/**
* main - check the code
* Return: Always 0. 
*/
int main(void)
{
int sum = 0, fives = 1, threes = 1;
while (fives < 1024)
{
fives = fives * 5;
if (fives > 1024)
{
break;
}
sum = sum + fives;
}
while (threes < 1024)
{
threes = threes * 3;
if (threes > 1024)
{
break;
}
sum = sum + threes;
}
printf("%d \n", sum);
return (0);
}
