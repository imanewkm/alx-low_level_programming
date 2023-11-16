#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
