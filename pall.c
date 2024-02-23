#include "monty.h"

void pall(stack_t **head, unsigned int line_number)
{
	while(*head != NULL)
	{
		printf("%d\n", (*head)->n);
		*head = (*head)->next;
	}
	line_number++;
}
