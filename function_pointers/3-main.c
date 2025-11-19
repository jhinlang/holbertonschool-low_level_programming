#include "3-calc.h"
/**
 * main - a programm that performs simple operations
 * @argc: is the count of arguments
 * @argv: is the value of arguments in string
 * Return: the result
 *
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*func)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	func = get_op_func(argv[2]);

	if (func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
