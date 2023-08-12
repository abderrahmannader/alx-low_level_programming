#include <stdio.h>

/**
 *main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char wor = 'a';

	while (wor <= 'z')
	{
		if (wor == 'q' || wor == 'e')
			wor++;
		putchar(wor);
		wor++;
	}
	putchar('\n');

	return (0);
}
