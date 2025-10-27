#include "main.h"
/**
 * _isdigit - function to check if the character c is digit
 * @c: check if this character is digit
 *
 * Return: 1 is is digit, otherwise 0
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
		else
		return (0);
}
