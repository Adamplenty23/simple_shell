#include "main.h"

/**
 * _do_execute - execute command received
 * @cmd: command to execute
 * @argv: arguments
 * @idx: index of process
 * Return: status
 */

int _do_execute(char **cmd, char **argv, int idx)
{
	char *full_path, *all_paths;
	pid_t new_child_proc;
	int status;

	all_paths = _getenvr("PATH", environ);
	full_path = _pathget(cmd[0], all_paths);
	if (full_path == NULL)
	{
		printerror(argv[0], cmd[0], idx);
		_freearray(cmd);
		return (127);
	}

	new_child_proc = fork();
	if (new_child_proc == 0)
	{
		if (execve(full_path, cmd, environ) == -1)
		{
			free(full_path), full_path = NULL;
			_freearray(cmd);
		}
	}
	else
	{
		waitpid(new_child_proc, &status, 0);
		_freearray(cmd);
		free(full_path), full_path = NULL;
	}

	return (WEXITSTATUS(status));
}
