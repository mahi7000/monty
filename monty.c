#include "monty.h"

char *op_arg = NULL;

/**
 * main - main function
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}

	execute_opcodes(file);

	fclose(file);

	return (0);
}
