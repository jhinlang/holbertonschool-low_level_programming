#include "variadic_functions.h"
/**
 * print_numbers - entry point to print numbers, followed by a new line
 * @separator: is the string to separate between numbers
 * @n: is the numbers of integers passed in the function
 *
 * Return: the numbers printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(list, int);
		printf("%d", value);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}

