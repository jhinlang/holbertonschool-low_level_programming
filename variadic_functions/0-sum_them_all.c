#include "variadic_functions.h"
/**
 * sum_them_all - is the entry point to sum all arguments of a function
 * @n: is the number of arguments
 *
 * Return: the sum of all arguments in the prototype
 */
int sum_them_all(const unsigned int n, ...)
{
	 unsigned int i = 0;
	int result = 0;
	int value = 0;
	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(list, int);
		result += value;
	}
	va_end(list);
	return (result);
}

