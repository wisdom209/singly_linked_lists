#include "main.h"

/**
 * free_list - deletes and frees list
 * @head: double pointer to start of list
 *
 * Return: int
 */
int free_list(Node **head)
{
	Node *temp;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (0);
}

