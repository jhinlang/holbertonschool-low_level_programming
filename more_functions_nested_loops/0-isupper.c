#include "main.h"
/**
 * _isupper - netry point to check if a character is lower or upper
 * @c: character to check
 *
 * Return: 1 if character is lower, otherwise 0
 *
 */
int _isupper(int c)
{
	if ( c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
