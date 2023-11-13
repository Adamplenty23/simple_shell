#include "main.h"

/**
 * _pathget - a function that gets the exact path
 * @cmd_name: the command name
 * @paths: the path that contains the exec files
 * Return: The specific path
 */
char *_pathget(char *cmd_name, char *paths)
{
	int cmd_len, tok_len;
	char *cp_path, *tok, *main_path;
	struct stat st;

	if (cmd_name == NULL || paths == NULL)
		return (NULL);
	cmd_len = _strlen(cmd_name);
	cp_path = _strdup(paths);
	if (!cp_path)
		return (NULL);
	tok = strtok(cp_path, ":");
	while (tok)
	{
		tok_len = strlen(tok);
		main_path = malloc(sizeof(char) * (tok_len + cmd_len + 2));
		if (!main_path)
		{
			free(cp_path);
			return (NULL);
		}
		_strcpy(main_path, tok);
		_strcat(main_path, "/");
		_strcat(main_path, cmd_name);
		if (stat(main_path, &st) == 0)
		{
			free(cp_path);
			return (main_path);
		}
		free(main_path);
		tok = strtok(NULL, ":");
	}
	free(cp_path), cp_path = NULL;
	if (stat(cmd_name, &st) == 0)
		return (_strdup(cmd_name));
	return (NULL);
}
