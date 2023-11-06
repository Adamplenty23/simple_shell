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
