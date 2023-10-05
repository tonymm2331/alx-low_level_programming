#include <stdlib.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to use from s2
 *
 * Return: pointer to newly created string, else NULL if failure occurs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int index, index2, len1, len2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
}
