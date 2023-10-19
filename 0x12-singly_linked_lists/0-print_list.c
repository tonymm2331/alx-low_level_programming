#include <stdio.h>
#include <lists.h>

/**
 * print_list - prints all the element of a list_t list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of the nodes printed.
 */
size_t printList(const list_t *h)
{
	size_t a = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		h=h->next
			a++;
	}
	return (a);
}
