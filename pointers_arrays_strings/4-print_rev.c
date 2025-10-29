#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - main entry to prints a string in reverse
 * @s: character to check
 *
 * Return: a string in reverse
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
void print_rev(char *s)
{
	int l = 0;
	int r = _strlen(s) -1;
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
