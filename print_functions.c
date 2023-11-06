#include "main.h"

/**
 * _putchar - a function that prints one character at a time
 * @a: the character to print
 * Return: 1 character to the stdout
 */

int _putchar(char a)
{
        return (write(1, &a, 1));
}

/**
 * _printS - prints string
 * @s: the string
 */

void _printS(char *s)
{
	write(STDOUT_FILENO, s, strlen(s));
}
