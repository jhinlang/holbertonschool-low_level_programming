#include "main.h"
#include <stdio.h>
/**
 * _strstr - entry point to find the substring needle into the string haystack
 * @haystack - is the string to travel and find needle
 * @needle - is the substring to find
 *
 * Return: *haystack or null
 *
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while(haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
