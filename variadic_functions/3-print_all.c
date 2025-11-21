#include "variadic_functions.h"


/**
 *print_char - prints a char
 *@ap: va_list
 */
void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);

	printf("%c", c);
}
/**
 * print_int - prints an integer
 *@ap: va_list
 */
void print_int(va_list ap)
{
	int n;

	n = va_arg(ap, int);

	printf("%d", n);
}
/**
 * print_float - prints a float
 *@ap: va_list
 */
void print_float(va_list ap)
{
	double f;

	f = va_arg(ap, double);

	printf("%f", f);
}

/**
 * print_string - prints a string
 *@ap: va_list
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - prints anything
 *@format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int j;
	char *sep;

	printer_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(ap, format);
	i = 0;
	sep = "";

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].t != 0)
		{
			if (format[i] == types[j].t)
			{
				printf("%s", sep);
				types[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
