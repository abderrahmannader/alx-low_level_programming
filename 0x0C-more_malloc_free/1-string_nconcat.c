#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes
 * @s1: string
 * @s2: string
 * @n: number of bytes
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *h;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		h = malloc(sizeof(char) * (l1 + n + 1));
	else
		h = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!h)
		return (NULL);

	while (i < l1)
	{
		h[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		h[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		h[i++] = s2[j++];

	h[i] = '\0';

	return (h);
}

