#include "main.h"
/**
 * _strcat - concats two string
 * @dest: pointer to the first string
 * @src: pointer to second string
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
int dest_i = 0;
int src_i = 0;
while (dest[dest_i] != '\0')
{
dest_i++;
}
while (1)
{
dest[dest_i] = src[src_i];
dest_i++;
src_i++;
if (src[src_i] == '\0')
break;
}
return (dest);
}
