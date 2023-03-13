/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring, or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (needle[i] != '\0')
	{
		i++;
	}
	while (haystack[j] != '\0')
	{
		j++;
	}
	if (i == 0)
	{
		return (haystack);
	}
	while (k < j)
	{
		if (haystack[k] == needle[0])
		{
			while (l < i)
			{
				if (haystack[k + l] != needle[l])
				{
					break;
				}
				l++;
			}
			if (l == i)
			{
				return (haystack + k);
			}
		}
		k++;
	}
	return (0);
}
