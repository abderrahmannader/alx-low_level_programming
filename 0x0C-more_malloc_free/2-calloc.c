#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory
 * @s: memory area
 * @b: char
 * @n: number of times
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory
 * @nmemb: number of elements
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}

