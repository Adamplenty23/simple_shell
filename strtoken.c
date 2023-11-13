#include "main.h"
/**
 * _strtok - a function that tokenizes a string
 * @str: the string to the tokenized
 * @delim: the seperators between array of strings
 * Return: a tokenized string
 */
char *_strtok(char *str, const char *delim)
{
	static char *last_tok;
	char *tokStart;

	if (str == NULL && last_tok == NULL)
		return (NULL);

	if (str)
		last_tok = str;
	while (*last_tok != '\0' && strchr(delim, *last_tok) != NULL)
		last_tok++;
	if (*last_tok == '\0')
	{
		last_tok = NULL;
		return (NULL);
	}

	tokStart = last_tok;
	while (*last_tok != '\0' && strchr(delim, *last_tok) == NULL)
		last_tok++;
	if (*last_tok != '\0')
	{
		*last_tok = '\0';
		last_tok++;
	}
	return (tokStart);
}
