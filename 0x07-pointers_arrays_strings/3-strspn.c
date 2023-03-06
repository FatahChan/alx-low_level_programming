/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string containing characters to match
 * Return: number of bytes in the initial segment of s which consist only of
 */
unsigned int _strspn(char *s, char *accept)
{
	int map[256] = {0};
	int i = 0;
	int j = 0;

	while (accept[j] != '\0')
	{
		map[accept[j]] = 1;
		j++;
	}
	while (s[i] != '\0')
	{
		if (map[s[i]] == 0)
			break;
		i++;
	}
	return (i);
}
