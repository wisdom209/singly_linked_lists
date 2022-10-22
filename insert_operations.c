#include "main.h"

/**
 * insert_beginning - inserts node at beginning
 * @head: pointer to first node
 * @str: data at node
 *
 * Return: pointer to first node
 */
Node *insert_beginning(Node **head, char *str)
{
	Node *temp;
	Node *temp2 = malloc(sizeof(Node));
	int i = 0;

	if (!temp2)
	{
		printf("Could not allocate space\n");
		exit(1);
	}

	temp2->s = str;

	if (*head == NULL)
	{
		*head = temp2;

		return (*head);
	}

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	temp2->next = *head;
	*head = temp2;

	return (*head);
}

/**
 * insert_end - inserts node at end
 * @head: pointer to first node
 * @str: data at node
 *
 * Return: length of list
 */
int insert_end(Node **head, char *str)
{
	Node *temp = *head;
	Node *temp2 = malloc(sizeof(Node));
	int i = 0;

	if (!temp2)
	{
		printf("Could not allocate space. \n");
		exit(1);
	}

	temp2->s = str;

	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}

	temp->next = temp2;

	return (i + 2);
}

/**
 * insert_position - inserts node at position
 * @head: double pointer to first node
 * @str: data at node
 * @position: position to insert node
 *
 * Return: pointer to first node
 */
int insert_position(Node **head, char *str, int position)
{
	Node *temp = *head;
	Node *temp2 = malloc(sizeof(Node));
	int i = 0, j = 0;

	if (!temp2)
	{
		printf("Could not allocate space for new position");
		exit(1);
	}

	/* count list length */
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	/* check for insertion at invalid positions */
	if (position > i || position < 0)
	{
		i = printf("Cannot insert at this position.\n");
		return (i);
	}

	/* if list is empty */
	if (*head == NULL || position == 1)
	{
		*head = insert_beginning(head, str);
		return (1);
	}

	temp = *head;
	for (j = 1; j <= position - 2; j++)
		temp = temp->next;

	temp2->s = str;
	temp2->next = temp->next;
	temp->next = temp2;

	return (i + 1);
}


