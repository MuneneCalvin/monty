#include "monty.h"

/**
 * f_pop:
 * @head: double head pointer to the stack
 * @counter: line count
 *
 * Return: nothing
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;
	if (*head == NULL)
	{
		fprint(stderr, "L%d: cant pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

/**
 * f_pint:
 * @head: double head pointer to the stack
 * @counter: line count
 *
 * Return : nothing
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprint(stderr, "L%u: cant pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
 * f_nop:
 * @head: double head pointer to the stack
 * @counter: line count
 *
 * Return: nothing
 */
void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}


