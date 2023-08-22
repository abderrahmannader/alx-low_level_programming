#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements
 * @a: input
 * @n: input
 * Return: input
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
