/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to the duplicated string, or NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int size = 1;
	unsigned int i;

	if (str == 0)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	array = malloc(size * sizeof(char));
	if (array == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
