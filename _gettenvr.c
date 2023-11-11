#include "main.h"

/**
 * _getenvr - a function that get the path of an env
 *
 * @var_name: the name of the variable
 * @env: environment variable
 *
 * Return: a string that contains the value of the specified specified pathname
 */

char *_getenvr(char *var_name, char **env)
{
	int indx, len;

	len = _strlen(var_name);

	for (indx = 0; env[indx] != NULL; indx++)
	{
		if (_strncmp(env[indx], var_name, len) == 0)
			return(env[indx] + (len + 1));
	}
	return (NULL);
}

