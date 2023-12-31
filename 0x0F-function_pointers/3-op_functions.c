
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: result of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

