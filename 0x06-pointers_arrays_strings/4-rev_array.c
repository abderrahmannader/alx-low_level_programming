#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: number
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int g;

	for (i = 0; i < n--; i++)
	{
		g = a[i];
		a[i] = a[n];
		a[n] = g;
	}
}
