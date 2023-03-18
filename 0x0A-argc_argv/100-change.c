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
	int i = 0;
	int change = 0;
	int coins[] = {25, 10, 5, 2, 1};
	unsigned int amount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		change += amount / coins[i];
		amount %= coins[i];
	}

	printf("%d\n", change);
	return (0);
}
