#include "main.h"

/**
 * create_new_list - creates an empty list
 * @head: pointer to first Node
 *
 * Return: length of list
 */
int create_new_list(Node **head)
{
	Node *temp = *head;
	Node *temp2;

	if (!temp)
		return (0);

	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}

	*head = NULL;

	return (0);
}
