#include "main.h"

/**
 * main - Entry function for our shell
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, -1 on failure
 */

int main(int ac, char **av)
{
	char *buf;
	size_t size;
	ssize_t r_userline;
	char **token_read;
	int i = 0;
	(void)ac, (void)av;

	while (2)
	{
		dis_prompt_user();
		buf = NULL;

		r_userline = getline(&buf, &size, stdin);
		if (r_userline == -1)
		{
			free(buf);
			exit(EXIT_SUCCESS);
		}
		token_read = _token_gen(buf);
		while (token_read[i])
		{
			_printS(token_read[i]);
			_putchar('\n');
			i++;
		}
	}
	return (0);
}
