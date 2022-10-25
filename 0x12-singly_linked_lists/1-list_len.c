#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: points to the head of list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
