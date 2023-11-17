#include "main.h"

/**
 * _token_gen - tokenizes the argument received
 * @arg: argument received
 * Return: pointer to array of tokens
 */

char **_token_gen(char *arg)
{
	char **token, *arg_cp, *delim = " \t\n", *tok;
	int str_count = 0, i, j;

	arg_cp = _strdup(arg);
	if (arg_cp == NULL)
		return (NULL);

	tok = _strtok(arg_cp, delim);
	while (tok != NULL)
	{
		str_count++;
		tok = _strtok(NULL, delim);
	}
	str_count++;
	token = malloc(sizeof(char *) * str_count);
	if (token == NULL)
	{
		free(token);
		return (NULL);
	}
	tok = _strtok(arg, delim);
	for (i = 0; tok != NULL; i++)
	{
		token[i] = _strdup(tok);
		if (token[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(token[j]);
			free(token);
			free(arg_cp);
		}
		tok = _strtok(NULL, delim);
	}
	token[i] = NULL;
	free(arg_cp);
	free(token);
	return (token);
}
