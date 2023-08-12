#include <stdio.h>

/**
 * main - entry point
 *
 *Return: 0
 */
int main(void)
{
	char wr = 'z';

	while (wr > 'a')
	{
		putchar(wr);
		wr--;
	}
	putchar('\n');
	return (0);
}
