#include "main.h"
/**
 * _strlen - returns the length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}

