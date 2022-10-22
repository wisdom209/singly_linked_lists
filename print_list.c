#include "main.h"

/**
 * print_list - prints a linked list
 * @head: pointer to first node
 *
 * Return: length of list
 */
int print_list(Node **head)
{
	Node *temp = *head;
	int i = 0;

	if (temp == NULL)
	{
		printf("List is empty !");
		printf("\n");
		return (0);
	}

	while (temp != NULL)
	{
		if (temp->next == NULL)
			printf("%s\n", temp->s);
		else
			printf("%s, ", temp->s);
		temp = temp->next;
		i++;
	}

	printf("\n");
	return (i);
}
