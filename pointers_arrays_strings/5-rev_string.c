#include <stdio.h>
#include "main.h"
/**
 * _strlen - entry to print the length of string
 * @s: is the checker variable
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_string - entry point to reverses a string
 * @s: is the checker variable
 *
 * Return: a reverse string
 *
 */
void rev_string(char *s)
{
/**
 * print_rev - main entry to prints a string in reverse
 * @s: character to check
 *
 * Return: a string in reverse
 */
	int l = 0;
	int r = _strlen(s) - 1;
	char t;

	while (l < r)
	{
		t = s[l];
		s[l] = s[r];
		s[r] = t;

		l++;
		r--;
	}
}
