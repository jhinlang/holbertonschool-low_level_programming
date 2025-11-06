#include <stdio.h>
#include "main.h"
/**
 * main - entry point to check if there is 2 arguments and mult them
 * @argc: is the numbers of arguments
 * @argv: is the value of arguments
 *
 * Return: the result of the multiplication or error
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
