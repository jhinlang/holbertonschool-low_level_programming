#include <stdio.h>
/**
 * main- write a program thats print all combinations of single-digits
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i;
i = 0;
while (i < 10)
{
putchar('0' + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
