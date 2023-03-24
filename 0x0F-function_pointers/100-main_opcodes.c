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
	char *code = (char *)main;
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	num_bytes = atoi(argv[1]);
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", (unsigned char)code[i]);
	}
	printf("\n");
	return (0);
}
