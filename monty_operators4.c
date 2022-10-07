#include "monty.h"

/**
 * f_pall:
 * @hwad: double head that prints evrything
 * @counter: unused line count
 *
 * Return: nothing
 */
void f_pall(stacl_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;
	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
/**
 * f_swa:
 * @head: head of dtack
 * @counter: line count
 *
 * Return: nothing
 */

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, temp;
	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}

