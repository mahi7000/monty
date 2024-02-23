#include "monty.h"

void execute_opcodes(FILE *file)
{
	int line_number, i;
	char line[20];
	stack_t *head = NULL;
	
	instruction_t instructions[3] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}};

	line_number = 1;
	while (fgets(line, sizeof(line), file))
	{
		char *opcode = strtok(line, " \t\n");
		
		op_arg = strtok(NULL, " \t\n");

		if (!opcode)
			continue;

		i = 0;
		while (instructions[i].opcode)
		{
			if (strcmp(instructions[i].opcode, opcode) == 0)
			{
				instructions[i].f(&head, line_number);
				break;
			}
			i++;
		}

		if (!instructions[i].opcode)
		{
			fprintf(stderr, "L%d: unknown instruction %s", line_number, opcode);
			fclose(file);
			exit(EXIT_FAILURE);
		}

		line_number++;
	}
}
