#include "lists.h"
#include "stdio.h"

/**
 * list_len - asdasd
 * @h: adcvdz
 * Return: sdevzv
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
