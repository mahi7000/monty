#include "monty.h"

void push(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int data;

	if (!op_arg)
	{
		fprintf(stderr ,"L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	data = atoi(op_arg);

	if (*head == NULL)
	{
		*head = malloc(sizeof(stack_t));

		(*head)->n = data;
		(*head)->prev = NULL;
		(*head)->next = NULL;
	}
	else
	{
		temp = malloc(sizeof(stack_t));
		temp->n = data;
		temp->prev = NULL;
		temp->next = *head;

		*head = temp;
	}
	line_number++;
}
