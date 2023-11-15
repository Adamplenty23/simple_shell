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

	while (1)
	{
<<<<<<< HEAD
		if (isatty(STDIN_FILENO) == 1)
			dis_prompt_user();

		r_userline = getline(&buf, &size, stdin);
		if (r_userline == -1)
=======
		buf = _command_line();
		if (buf == NULL) /*handling EOF*/
>>>>>>> 3f167794b328679d49f206c444fd91b7c5ec7105
		{
			if (isatty(STDIN_FILENO))
				_putchar('\n');
			return (status);
		}
		idx++;

		token_read = _token_gen(buf);
		if (!token_read)
			continue;

		status = _do_execute(token_read, av, idx);

	}

	return (0);
}
