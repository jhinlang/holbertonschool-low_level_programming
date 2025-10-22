#include "main.h"
/**
 * main- Write a function that prints the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 *
 */
int alphabet(void)
{
int i;
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
putchar('\n');
return (0);
}
