#include <stdio.h>
#include "main.h"
/**
 * main - is the entry point to print all arguments it receives
 * @argc: is the number of arguments
 * @argv: is the values of arguments
 *
 * Return: all arguments it receives
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
