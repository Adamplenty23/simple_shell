#include "main.h"

/**
 * _token_gen - tokenizes the argument received
 * @arg: argument received
 * Return: pointer to array of tokens
 */

char **_token_gen(char *arg)
{
	char **token, *arg_cp, *delim = " \t\n", *tok;
	int str_count = 0, i;

	arg_cp = strdup(arg);
	if (arg_cp == NULL)
		return (NULL);

	tok = strtok(arg_cp, delim);
	while (tok)
	{ 
		str_count++;
		tok = strtok(NULL, delim);
	}
	str_count++;
	token = malloc(sizeof(char *) * str_count);
	if (token == NULL)
	{
		free(arg_cp);
		return (NULL);
	}
	tok = strtok(arg, delim);
	for (i = 0; tok != NULL; i++)
	{
		token[i] = tok;
		tok = strtok(NULL, delim);
	}
	token[i] = NULL;
	free(arg_cp);
	return (token);
}
