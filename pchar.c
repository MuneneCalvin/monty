#include "monty.h"

/**
 * f_pchar:
 * @head: stck head
 * @counter: line count
 *
 * Return: nothing
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;
	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h-> 127 || h->n < 0)
	{
		fprint(stderr, "L%d: can't pchar, value out of range\n", couter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}


