#include <stdio.h>
#include "main.h"

/**
 * main - prints the name
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
