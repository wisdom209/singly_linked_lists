#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct Node - a node in list
 * @s: first param
 * @next: link to next node
 */
typedef struct Node
{
	char *s;
	struct Node *next;
} Node;

int create_new_list(Node **head);
Node *insert_beginning(Node **head, char *str);
int insert_end(Node **head, char *str);
int insert_position(Node **head, char *str, int position);
int delete_beginning(Node **head);
int delete_end(Node **head);
int delete_position(Node **head, int position);
int print_list(Node **head);
int reverse_list(Node **head);
int free_list(Node **head);
#endif
