#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int n, c;

	for (n = 1; n <= 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar (c % 10 + '0');
		}
		_putchar('\n');
	}
}

