#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *code;
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	code = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", code[i]);
			break;
		}
		printf("%02hhx ", code[i]);
	}
	return (0);
}
