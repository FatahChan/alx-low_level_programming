/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int map[256] = {0};
	int i = 0;
	int j = 0;

	while (accept[j] != '\0')
	{
		map[(int)accept[j]] = 1;
		j++;
	}
	while (s[i] != '\0')
	{
		if (map[(int)s[i]] == 1)
			return (s + i);
		i++;
	}
	return (0);
}
