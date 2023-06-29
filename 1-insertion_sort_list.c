#include "sort.h"
/**
 * swap - swap 2 element in an list
 * @h: head of list
 * @f: 1st node
 * @g: 2nd node
 */
void swap(listint_t *f, listint_t *g, listint_t **h)
{
	listint_t *aux1 = NULL, *aux2 = NULL;

	if (f == NULL || g == NULL)
		return;
	aux1 = f->prev;
	aux2 = g->next;
	/* if nodes are adj*/
	if (aux1)
		aux1->next = g;
	if (aux2)
		aux2->prev = f;
	f->next = aux2;
	f->prev = g;
	g->next = f;
	g->prev = aux1;
	if (aux1 == NULL)
		*h = g;
}
/**
 * insertion_sort_list  - insertion_sort_list
 * @list: doubly liked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *h, *prev;
	int val;

	if (list == NULL || (*list)->next == NULL || (*list) == NULL)
	{
		return;
	}
	h = *list;
	while (h)
	{
		prev = h->prev;
				val = h->n;

		while (prev && prev->n > val)
		{
			swap(prev, h, list);
			print_list(*list);
			prev = h->prev;
		}
		h = h->next;
	}
}
