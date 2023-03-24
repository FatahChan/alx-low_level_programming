#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function you need to use
 * Return: index of needle
 * 0, if no element matches, return -1, if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
