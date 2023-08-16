#include "main.h"

/**
 * jack_bauer - prints
 */
void jack_bauer(void)
{
	int m, h;

	m = 0;

	while (m < 24)
	{
		h = 0;
		while (h < 60)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar('\n');
			h++;
		}
		m++;
	}
}
