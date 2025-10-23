#include "main.h"
/**
 * print_alphabet_x10 - create a program that print alphabet 10x
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
int i;
i = 'a';
while ((i <= 'z') * 10)
{
_putchar(i);
i++;
}
_putchar('\n');
return (0);
}

