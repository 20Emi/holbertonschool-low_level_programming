#ifndef _lists_h_
#define _lists_h_

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

	/*Task 0*/
size_t print_list(const list_t *h);
	/*Task 1*/
size_t list_len(const list_t *h);
	/*Task 2*/
list_t *add_node(list_t **head, const char *str);
	/*Task 3*/
list_t *add_node_end(list_t **head, const char *str);
	/*Task 4*/
void free_list(list_t *head);

#endif
