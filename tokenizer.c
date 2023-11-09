#include "main.h"

/**
 * _token_gen - tokenizes the argument received
 * @arg: argument received
 * Return: pointer to array of tokens
 */

char **_token_gen(char *arg)
{
	char **token, *arg_cp, *tok, *toks;
	int str_count = 0, i = 0;

	arg_cp = _strdup(arg);
	if (arg_cp == NULL)
		return (NULL);

	tok = strtok(arg, DELIM);
	while (tok != NULL)
	{
		str_count++;
		tok = strtok(NULL, DELIM);
	}
	str_count++;

	token = malloc(sizeof(char *) * str_count);
	if (token == NULL)
	{
		free(arg_cp);
		return (NULL);
	}
	toks = strtok(arg_cp, DELIM);
	token[0] = toks;
	for (i = 1; toks != NULL; i++)
	{
		toks = strtok(NULL, DELIM);
		token[i] = toks;
	}
	return (token);
}
