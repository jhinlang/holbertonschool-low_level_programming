#include <stdio.h>
#include "main.h"
/**
 * main - is the entry point to prints the numbers of arguments
 * @argc: is the number of arguments
 * @argv: is the values of arguments
 *
 * Return: the number of arguments
 *
 */
int main(int argc, int *argv[])
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
