/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring, or NULL if not
 */
char *_strstr(char *haystack, char *needle) {
	char *ptr = 0;
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++) {
		if (haystack[i] == needle[0]) {
			for (j = 0; needle[j] != '\0'; j++) {

				if (haystack[i+j] != needle[j]) {
					break;
				}
			}
			if (needle[j] == '\0') {
				ptr = &haystack[i];
				break;
			}
		}
	}
	return ptr;
}
