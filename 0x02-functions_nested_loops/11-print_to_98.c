#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints
 * @n: print from this number
 */
void print_to_98(int n)
{
	int b, m;

	if (n <= 98)
	{
		for (b = n; b <= 98; b++)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	} else if (n >= 98)
	{
		for (m = n; m >= 98; m--)
		{
			if (m != 98)
				printf("%d, ", m);
			else if (m == 98)
				printf("%d\n", m);
		}
	}
}

