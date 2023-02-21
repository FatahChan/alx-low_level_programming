#include "main.h"
/*
* 1-alphabet.c - Prints the alphabet in lowercase
*/

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}