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
	write(STDOUT_FILENO, s, _strlen(s));
}

/**
 * dis_prompt_user - display a prompt to the user
 */

void dis_prompt_user(void)
{
	_printS(PROMPT);
}

/**
 * printerror - prints error message to stdout
 * @name: name of executable given
 * @comd: command
 * @idx: index
 */

void printerror(char *name, char *comd, int idx)
{
	char *index;
	char mesg[] = ": not found\n";

	index = _itoa(idx);

	write(STDERR_FILENO, name, _strlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, index, _strlen(index));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, comd, _strlen(comd));
	write(STDERR_FILENO, mesg, _strlen(mesg));

	free(index);
}
