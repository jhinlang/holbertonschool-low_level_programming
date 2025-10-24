#include <stdio.h>

/**
 * main -entry point to test some thing in C
 *
 * Return: I dont know
 *
 */
int main(void)
{
	signed char letter = 'A';

	printf("Entrez une lettre: ");
	scanf("%c", &letter);

	printf("Votre lettre est : %c ", letter);

	return (0);
}
