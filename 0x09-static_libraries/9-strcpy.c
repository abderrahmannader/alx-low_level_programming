#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointer
 * @dest: inputs
 * @src: input
 * Return: inputs
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int u = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; u < i ; u++)
	{
		dest[u] = src[u];
	}
	dest[i] = '\0';
	return (dest);
}

