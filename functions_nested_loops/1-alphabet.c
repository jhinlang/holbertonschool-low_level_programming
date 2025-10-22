#include "main.h"
/**
 * alphabet- Write a function that prints the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
int i;
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
return (0);
}
