#include "main.h"

/**
 * delete_beginning - delete node at beginning
 * @head: double pointer to first node
 *
 * Return: 0 if successful
 */
int delete_beginning(Node **head)
{
	Node *temp = *head;
	Node *temp1 = (*head)->next;
	*head = temp1;
	free(temp);

	return (0);
}

/**
 * delete_end - delete node at end
 * @head: double pointer to first node
 *
 * Return: 0 if successful
 */
int delete_end(Node **head)
{
	Node *temp = *head;
	Node *temp2;

	if (temp == NULL || temp->next == NULL)
	{
		free(temp);
		*head = NULL;
		return (0);
	}

	while (temp != NULL)
	{
		if (temp->next->next == NULL)
		{
			temp2 = temp->next->next;
			temp->next = NULL;
			free(temp2);
			break;
		}
		temp = temp->next;
	}

	return (0);
}

/**
 * delete_position - delete node at position
 * @head: double pointer to first node
 * @position: position to delete
 *
 * Return: 0 if successful
 */
int delete_position(Node **head, int position)
{
	Node *temp2 = malloc(sizeof(Node));

	Node *temp = *head;
	int i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	temp = *head;

	if (position <= 0 || position > i)
	{
		printf("Index out of bounds. \n"
			   "Cannot delete from this position\n");
		exit(1);
	}

	if (position == 1)
	{
		*head = (*head)->next;
		free(temp);
		return (0);
	}

	for (i = 1; i <= position - 2; i++)
		temp = temp->next;

	temp2 = temp->next;
	temp->next = temp2->next;

	free(temp2);

	return (0);
}
