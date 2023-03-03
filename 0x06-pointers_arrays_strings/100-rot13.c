/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: str
 */
char *rot13(char *str)
{
	int i;
	int j;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; rot13[j] != '\0'; j++)
		{
			if (str[i] == rot13[j])
			{
				str[i] = rot13_2[j];
				break;
			}
		}
	}
	return (str);
}
