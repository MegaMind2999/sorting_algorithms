#include "sort.h"

/**
 * swap - Swap 2 nodes in a listint_t doubly-linked list.
 * @node1: address to the of the first item in list.
 * @node2: address to the of the second item in list.
 * return: void
 */
void swap(listint_t *node1, listint_t *node2)
{
	int temp;

	temp = node1->n;
	node1->n = node2->n;
	node2->n = temp;
}

/**
 * insertion_sort_list - Insertion sorting a doubly linked list
 * @list: Address of  the head of a doubly-linked list of integers.
 *
 * return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *m, *z, *a;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (m = (*list)->next; m != NULL; m = a)
	{
		a = m->next;
		z = m->prev;
	while (z != NULL && m->n < z->n)
	{
		swap(z, m);
		print_list((const listint_t *) *list);
	}
	}
}
