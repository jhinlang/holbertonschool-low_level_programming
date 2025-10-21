#include <stdio.h>
/**
 * main - function to create an alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char alphabet1 = 'a';
while (alphabet1 <= 'z')
{
putchar(alphabet1);
alphabet1++;
}
alphabet1 = 'A';
while (alphabet1 <= 'Z')
{
putchar(alphabet1);
alphabet1++;
}
{
putchar('\n');
return (0);
}
