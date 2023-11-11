#include "main.h"

/**
 * main - Entry function for our shell
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, -1 on failure
 */
int main(int ac, char **av, char **env)
{
	char *buf = NULL, *all_paths, *main_path;
	size_t size;
	ssize_t r_userline;
	char **token_read;
	int i;
	(void)ac, (void)av;

	while (1)
	{
		dis_prompt_user();
		r_userline = getline(&buf, &size, stdin);
		if (r_userline == -1)
		{
			free(buf);
			exit(EXIT_SUCCESS);
		}
		token_read = _token_gen(buf);
		/*all_paths = _getenvr("PATH", env);
		main_path = _pathget(token_read[0], all_paths);
		if (execve(main_path, token_read, env) == -1)
		{
			perror(token_read[0]);
			exit(EXIT_FAILURE);
		}

		free(buf);
		free(token_read);
	}*/

	return (0);
}
