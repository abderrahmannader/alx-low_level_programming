#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: str
 * Return: input
 */
void puts_half(char *str)
{
	int i, u, l;

	l = 0;

	for (i = 0; str[i] != '\0'; i++)
		l++;

	u = (l / 2);

	if ((l % 2) == 1)
		u = ((l + 1) / 2);

	for (i = u; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
