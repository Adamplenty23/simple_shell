#include "main.h"

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
