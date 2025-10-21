#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - determine if the last digit of a random number is greater than 5
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("Last digit of n is %d and is greater than 5\n", n);
}
else if (n % 10 == 0)
{
printf("Last digit of n is %d and is 0\n", n);
}
else
{
printf("Last digit of n is %d and is less than 6 and not 0\n", n);
}
return (0);
}
