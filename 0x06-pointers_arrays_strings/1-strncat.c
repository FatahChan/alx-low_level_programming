/**
 * _strncat - concats two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: limit src to n char
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
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
if (src_i == n)
{
dest[dest_i + 1] = '\0';
break;
}
}
return (dest);
}
