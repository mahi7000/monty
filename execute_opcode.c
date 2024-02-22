#include "monty.h"

void execute_opcodes(FILE *file)
{
	int line_number;
	char line[20];
	stack_t *head = NULL;
	
	line_number = 1;
	while (fgets(line, sizeof(line), file))
	{
		char *opcode = strtok(line, " \t\n");

		if (strcmp(opcode, "push") == 0)
		{
			char *arg = strtok(NULL, " \t\n");
			int data = atoi(arg);

			push(&head, line_number, data);
		}
		else if (strcmp(opcode, "pall") == 0)
			pall(&head, line_number);

		line_number++;
	}
}
