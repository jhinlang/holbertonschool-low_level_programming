#include <stdio.h>
#include "main.h"
/**
 * _strlen - entry point to returns the length of a string
 * @s: is the variable to returns the length
 *
 * Return: the length of a string
 *
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

