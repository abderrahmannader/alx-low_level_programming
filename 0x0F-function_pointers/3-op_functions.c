#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum
 * @a: The first
 * @b: The second
 *
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference
 * @a: The first
 * @b: The second
 *
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product
 * @a: The first
 * @b: The second
 *
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division
 * @a: The first
 * @b: The second
 *
 * Return: 0
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder
 * @a: The first
 * @b: The second
 *
 * Return: 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}

