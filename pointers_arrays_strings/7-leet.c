#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	char leet_from[] = "aAeEoOtTlL";
	char leet_to[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leet_from[j])
			{
				s[i] = leet_to[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
