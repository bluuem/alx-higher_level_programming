#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - this is a singly likned list
 * @n: integer wiht the the val n
 * @next: this points to the nnode to come
 * Description: this is singly linked list node struc
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
size_t print_listint(const listint_t *h);
int check_cycle(listint_t *list);
#endif
