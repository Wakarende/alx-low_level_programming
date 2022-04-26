#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list of type listint_t to traverse
 * Description: returns the number of elements in a linked list
 * Return: number of nodes
 */

size_t listint_lent(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
