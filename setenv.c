#include "main.h"

/**
 * _setenv - sets an environment pair
 * @name: name of the variable
 * @value: value of the variable
 * @overwrite: inter value to determine what the 
 * function does
 * Return: 0 on success -1 otherwise
 */

int _setenv(char *name, char *value, int overwrite)
{
	int i = 0, len = 0;
	char *var_new = NULL;

	if (name == NULL || value == NULL)
		return (-1);
	for (i = 0; environ[i]; i++)
	{
		len = _strlen(name);
		if (_strncmp(environ[i], name, len) == 0)
		{
			if (overwrite)
			{
				var_new = malloc(_strlen(name) + _strlen(value) + 2);
				_strcpy(var_new, name);
				_strcat(var_new, "=");
				_strcat(var_new, value);
				environ[i] = var_new;
				return (0);
			}
			return (0);
		}
		free(var_new);
	}
	var_new = malloc(_strlen(name) + _strlen(value) + 2);
	_strcpy(var_new, name);
	_strcat(var_new, "=");
	_strcat(var_new, value);
	environ[i] = var_new;
	environ[i + 1] = NULL;
	free(var_new);

	return (0);
}
