#include "main.h"
/**
 * puts2 - function should print only one character
 * @str: str
 * Return: print
 */
void puts2(char *str)
{
	int l = 0;
	int i = 0;
	char *g = str;
	int u;

	while (*g != '\0')
	{
		g++;
		l++;
	}
	i = l - 1;
	for (u = 0 ; u <= i ; u++)
	{
		if (u % 2 == 0)
	{
		_putchar(str[u]);
	}
	}
	_putchar('\n');
}

