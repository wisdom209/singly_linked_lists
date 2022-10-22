#include "main.h"

/**
 * main - entry
 * Return: 0 if successful
 */
int main(void)
{
	Node *head;

	create_new_list(&head);
	insert_beginning(&head, "hello");
	print_list(&head);
	insert_end(&head, "world_1");
	insert_end(&head, "world_2");
	insert_end(&head, "world_3");
	insert_end(&head, "world_4");
	print_list(&head);
	insert_position(&head, "dear", 2);
	print_list(&head);
	delete_beginning(&head);
	print_list(&head);
	delete_end(&head);
	print_list(&head);
	delete_position(&head, 1);
	print_list(&head);
	reverse_list(&head);
	print_list(&head);
	free_list(&head);
	print_list(&head);
	return (0);
}
