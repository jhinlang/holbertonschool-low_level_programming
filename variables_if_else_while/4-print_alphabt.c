#include <stdio.h>
/**
 * main - function to display alphabet in lowercase except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z' && !'q' && !'e')
{
putchar(alphabet);
alphabet++;
return (0);
}
}
