#include "3-calc.h"
/**
 * op_add - entry point to sum a and b
 * @a: an int to sum with b
 * @b: an int to sum with a
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point to returns the difference of a and b
 * @a: is one of integer in the sub
 * @b: is one of integer in the sub
 *
 * Return: the diferrence of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - is the entry point to returns the product of a and b
 * @a: is an integer to mul
 * @b: is an integer to mul
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry point to the result of a divisinof a by b
 * @a: is the integer to divide
 * @b: is the integer will divide a
 *
 * Return: the result of the devision of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - is the entry point to modulo a by b
 * @a: is the integer to modulo
 * @b: is the integer wich will modulo a
 *
 * Return: the remainder of the division of a by b
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}
