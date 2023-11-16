#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t lis
 * @h: list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
