#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times
 */
void print_alphabet_x10(void)
{
	int line;
	int alp;

	for (line = 0; line <= 9; line++)
	{
		for (alp = a; alp <= z; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
