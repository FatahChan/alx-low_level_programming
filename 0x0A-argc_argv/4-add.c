#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
