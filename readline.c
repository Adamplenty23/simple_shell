#include "main.h"
/**
 * _sigint_handler - creating a condition for ^c
 * @signum: the condition
 * Return: no return value
 */
void _sigint_handler(int signum)
{
	/*creating a custom signum for cntr c*/
	_putchar('\n');
	_putchar('$');
	_putchar(' ');
	(void)signum;
}
/**
 * _command_line - function to read command line
 * Return: Line read on success
 */

char *_command_line(void)
{
	char *buf = NULL;
	size_t size = 0;
	ssize_t r_userline;

	if (isatty(STDIN_FILENO) == 1)
		dis_prompt_user();

	r_userline = _gettline(&buf, &size, stdin);
	if (r_userline == -1)
	{
		free(buf);
		return (NULL);
	}

	return (buf);
}
