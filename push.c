#include "monty.h"

void push(stack_t **head, int line_number, int data)
{
	stack_t *temp;

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

void pall(stack_t **head, int line_number)
{
	while (*head != NULL)
	{
		printf("%d\n", (*head)->n);
		*head = (*head)->next;
	}
	line_number++;
}
