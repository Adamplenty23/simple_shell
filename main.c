#include "main.h"

/**
 * main - Entry function for our shell
 * @ac: argument count
 * @av: argument vector
 * @env: environment variable
 * Return: 0 on success, -1 on failure
 */
int main(int ac, char **av, char **env)
{
	char *buf = NULL, *all_paths, *main_path;
	size_t size;
	ssize_t r_userline;
	char **token_read = NULL;
	int i, status = 0;
	(void)ac;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			dis_prompt_user();

		r_userline = _gettline(&buf, &size, stdin);
		if (r_userline == -1)
		{
			free(buf), buf = NULL;
			exit(EXIT_SUCCESS);
		}

		token_read = _token_gen(buf);
		if (!token_read)
			continue;

		status = _do_execute(token_read, av);

	}

	return (0);
}
