#include <malloc.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size2++;
	}
	array = malloc((size1 + size2 + 1) * sizeof(char));
	if (array == 0)
	{
		return (0);
	}
	for (i = 0; i < size1; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		array[i + size1] = s2[i];
	}
	array[size1 + size2] = '\0';
	return (array);
}
