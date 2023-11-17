#include "main.h"
/**
 * main - Entry function for our shell
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, -1 on failure
 */
int main(int ac, char **av)
{
	char *buf = NULL;
	char **token_read = NULL;
	int status = 0, idx = 0;
	(void)ac;

	signal(SIGINT, _sigint_handler);

	while (1)
	{
		buf = _command_line();
		if (buf == NULL) /*handling EOF*/
		{
			if (isatty(STDIN_FILENO))
				_putchar('\n');
			return (status);
		}
		idx++;

		token_read = _token_gen(buf);
		if (!token_read)
		{
			free(buf);
			return (-1);
		}

		if (is_builtin(token_read[0]))
			do_builtin(token_read, av, &status, idx);
		else
			status = _do_execute(token_read, av, idx);

		free(buf);
	}

	return (0);
}
