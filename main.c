#include "main.h"

/**
 * main - Entry function for our shell
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, -1 on failure
 */

/*int main(int ac, char **av)*/
int main(void)
{
	char *buf = NULL;
	size_t size;
	ssize_t r_userline;
	char **token_read;
	int i;
/*	(void)ac, (void)av; */

	while (2)
	{
		dis_prompt_user();
		r_userline = getline(&buf, &size, stdin);
		if (r_userline == -1)
		{
			free(buf);
			exit(EXIT_SUCCESS);
		}
		token_read = _token_gen(buf);
		i = 0;
		while (token_read[i])
		{
			printf("args[%i] -> %s\n", i, token_read[i]);
			i++;
		}
	}
	return (0);
}
