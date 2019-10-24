#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers
 * @a: Int number 1
 * @b: Int number 2
 * Return: Int of the sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: Int number 1
 * @b: Int number 2
 * Return: Int of the difference of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiples two numbers
 * @a: Int number 1
 * @b: Int number 2
 * Return: Int of the product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: Int number 1
 * @b: Int number 2
 * Return: Int of the result of the division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Divides two numbers
 * @a: Int number 1
 * @b: Int number 2
 * Return: Int of the remainder after division of the 2 numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
