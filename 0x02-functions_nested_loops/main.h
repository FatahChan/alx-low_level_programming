#include <stdio.h>
/**
 * putchar - prints _putchar, followed by a new line.
 *
 * Return: void
 */
void printsPutChar() {
    printf("_putchar\n");
}
/**
 * putchar - prints _putchar, followed by a new line.
 *
 * Return: void
 */
void print_alphabet() {
    for (char i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
    }
    putchar('\n');
}
