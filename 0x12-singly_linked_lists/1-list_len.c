#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number
 * @h: pointer
 *
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

