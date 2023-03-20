#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * mul - multiplies two numbers as strings
 * @s1: first number
 * @s2: second number
 * Return: pointer to result
 */
char *mul(char* s1, char* s2)
{
    int a[100],b[100];
    char *ans = malloc(100);
    int i,j,tmp;
    int l1 = strlen(s1);
    int l2 = strlen(s2);

	for (i = 0; i < l1; i++)
		a[i] = s1[l1 - i - 1] - '0';
	for (i = 0; i < l2; i++)
		b[i] = s2[l2 - i - 1] - '0';
	for (i = 0; i < l1 + l2; i++)
		ans[i] = '0';
	for (i = 0; i < l1; i++)
	{
		for (j = 0; j < l2; j++)
		{
			tmp = (ans[i + j] - '0') + (a[i] * b[j]);
			ans[i + j] = (tmp % 10) + '0';
			ans[i + j + 1] += tmp / 10;
		}
	}
	for (i = l1 + l2 - 1; i > 0; i--)
	{
		if (ans[i] != '0')
			break;
	}
	ans[i + 1] = '\0';
	for (j = 0; i >= 0; i--, j++)
		ans[j] = ans[i];
	ans[j] = '\0';
	return (ans);
}

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
		printf("%s\n", mul(argv[1], argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
