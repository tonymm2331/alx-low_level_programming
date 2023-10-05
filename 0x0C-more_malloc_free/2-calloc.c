#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: members of array
 * @size: size of each member
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
