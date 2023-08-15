#include <unistd.h>
#include "main.h"

/**
 *main - entry point
 *
 *Return: 0
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

