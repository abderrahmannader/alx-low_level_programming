#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0
 */
int main(void)
{
	char wr = 'a';
	char WR = 'A';

	while (wr <= 'z')
	{
		putchar(wr);
		wr++;
	}
	while (WR <= 'Z')
	{
		putchar(WR);
		WR++;
	}
	putchar('\n');

	return (0);
}
