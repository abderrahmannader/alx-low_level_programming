#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0
 */
int main(void)
{
	char wor = 'a';
	char WOR = 'A';

	while (wor <= 'z')
	{
		putchar(wor);
		wor++;
	}
	while (WOR <= 'Z')
	{
		putchar(WOR);
		WOR++
	}
	putchar('\n');

	return (0);
}
