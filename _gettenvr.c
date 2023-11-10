#include "main.h"

/**
 * _getenvr - a function that get the path of an env
 *
 * @var_name: the name of the variable
 * @envr: environment variable
 *
 * Return: a string that contains the value of the specified specified pathname
 */

char *_getenvr(char *var_name, char **envr)
{
	int indx, len;

	len = _strlen(var_name);

	for (indx = 0; envr[indx] != NULL; indx++)
	{
		if (_strncmp(envr[indx], var_name, len) == 0)
			return(envr[indx] + (len + 1));
	}
	return (NULL);
