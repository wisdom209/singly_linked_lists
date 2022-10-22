#include "main.h"

/**
 * reverse_list - reverses a linked list
 * @head: double pointer to start of list
 *
 * Return: int
 */
int reverse_list(Node **head)
{
	Node *current, *prev, *next;

	prev = NULL;
	current = *head, next = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (0);
}
