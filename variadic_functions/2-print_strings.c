#include "variadic_functions.h"
/**
 * prints_strings - is entry point to print strings
 * @separator: is the string to be printed between the strings
 * @n: is the number of string passed to the function
 *
 * Return: the strings printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(list);
}
