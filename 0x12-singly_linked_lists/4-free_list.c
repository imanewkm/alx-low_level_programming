#include "lists.h"
/**
 * free_list - frees a list
 * @head: input
 * Return: a list
 */
void free_list(list_t *head)
{
	list_t *ptr;
	list_t *next;

	ptr = head;
	while (ptr)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next;
	}
}
