#include <stdio.h>
/**
 * main- program that prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i;
i = 0;
while (i <= 15)
{
if (i < 10)
putchar('0' + i);
else
putchar('a' + (i - 10));
i++;
}
putchar('\n');
return (0);
}
