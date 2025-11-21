#include "variadic_functions.h"
/**
 * sum_them_all - is the entry point to sum all arguments of a function
 * @n: is the number of arguments
 *
 * Return: the sum of all arguments in the prototype
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	int result;
	va_list list;
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(list, int);
		sum += value;
	}
	va_end(list);
	return (sum);
}
		
	
