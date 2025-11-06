#include "main.h"
#include <stdio.h>
/**
 * nprime - check if n is divisible by i
 * @n: numlber to check
 * @i: divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int nprime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (nprime(n, i + 1));
}

/**
 * is_prime_number - main entry to print prime number
 * @n: is the number to check and print prime if is it
 *
 * Return: the numbers which are prime
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (nprime(n, 2));
}
