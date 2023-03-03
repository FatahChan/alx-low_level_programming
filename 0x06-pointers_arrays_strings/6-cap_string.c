/**
 * cap_string - capitalizes all words of a string
 * @str: string to be converted
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	if (str[i] == '\0')
		return (str);

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	for (; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
					break;
				}
			}
		}
	}
	return (str);
}
