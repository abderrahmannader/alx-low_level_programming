#include "main.h"

/**
 * times_table - prints the 9 times
 */
void times_table(void)
{
	int num, r, e;

	for (num = 0; num < 10; num++)
	{
		for (r = 0; r < 10; r++)
		{
			e = r * num;
			if (r == 0)
			{
				_putchar(e + '0');
			}

			if (e < 10 && r != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(e + '0');
			} else if (e >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

