#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input
 * @s1: input
 * @s2: input
 * Return: concat s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, o;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = o = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[o] != '\0')
		o++;
	c = malloc(sizeof(char) * (i + o + 1));

	if (c == NULL)
		return (NULL);
	i = o = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	while (s2[o] != '\0')
	{
		c[i] = s2[o];
		i++, o++;
	}
	c[i] = '\0';
	return (c);
}

