#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 
 */

int main(void)
{
	char wor = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(wor[i]);
	}
	putchar('\n');
	return (0);

}
