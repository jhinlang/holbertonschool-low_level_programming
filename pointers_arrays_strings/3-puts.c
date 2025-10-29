#include <stdio.h>
#include "main.h"
/**
 * _puts - entry point to prints a string followed by a new line, to stdout
 * @*str: is a pointer
 *
 * Return: the string followed by a new line
 *
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')  // tant qu'on n’a pas atteint la fin
    {
        _putchar(str[i]);   // afficher le caractère à la position i
        i++;                // passer au suivant
    }

    _putchar('\n'); // retour à la ligne
}

