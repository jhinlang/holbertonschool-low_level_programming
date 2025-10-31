#include "main.h"
/**
 * cap_string - put the first letter of each word in upper
 * @s: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '!', '?', '"', '(', ')', '{', '}', };

	while (s[i] != '\0')
	{
		if (i == 0 &&(s[i] >='a' && s[i] <= 'z'))
			s[i] -= 32;
		else
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
				{
						s[i] -= 32;
						break;
				}
			}
		}
		i++;
	}
	return (s);
}

