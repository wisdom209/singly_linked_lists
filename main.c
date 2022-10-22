#include "main.h"

/**
 * main - entry
 * Return: 0 if successful
 */
int main(void)
{
	Node *head;

	printf("Creating new list...\n");
	create_new_list(&head);
	print_list(&head);
	printf("\n");
	printf("insert an item at beginning of list...\n");
	insert_beginning(&head, "A");
	print_list(&head);
	printf("insert items at end of list...\n");
	insert_end(&head, "B");
	insert_end(&head, "C");
	insert_end(&head, "D");
	insert_end(&head, "E");
	print_list(&head);
	printf("insert an item at 2nd position...\n");
	insert_position(&head, "(squeezing in)", 2);
	print_list(&head);
	printf("deleting first item...\n");
	delete_beginning(&head);
	print_list(&head);
	printf("deleting last item...\n");
	delete_end(&head);
	print_list(&head);
	printf("delete an item at 1st position...\n");
	delete_position(&head, 1);
	print_list(&head);
	printf("Reverse the list...\n");
	reverse_list(&head);
	print_list(&head);
	printf("free list from memory...\n");
	free_list(&head);
	print_list(&head);
	printf("\n");
	
	return (0);
}
