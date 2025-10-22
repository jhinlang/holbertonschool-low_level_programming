#include <stdio.h>
/**
 * main - writing a program that prints alphabet in lowercase and reverse
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i = 'z';
while (i >= 'a')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}

