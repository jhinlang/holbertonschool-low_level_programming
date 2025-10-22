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
putchar("%x", i);
i++;
}
putchar("\n");
return (0);
}
