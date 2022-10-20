#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints list
 * @h: param list
 * Return: struct
 */
size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
