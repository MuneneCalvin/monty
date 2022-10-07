#include "monty.h"

/**
 * free_stack-
 * @head: head pointer to the stack
 *
 * Return:nothing
 */
void free_stack(stack_t *head)
{
	stack_t *temp;
	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
/**
 * f_stack-
 * @head: head of the stack
 *
 * Return: nothing
 */

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}


