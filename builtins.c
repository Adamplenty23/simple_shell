#include "main.h"

/**
 * is_builtin - checks if it is builtin function
 * @comd: command to check
 * Return: 0 on sucess, 1 otherwise
 */

int is_builtin(char *comd)
{
	char *builtins[] = {"exit", "env", "setenv", "cd", NULL};
	int i;

	for (i = 0; builtins[i]; i++)
	{
		if (_strcmp(comd, builtins[i]) == 0)
			return (1);
	}
	return (0);
}

/**
 * do_builtin - execute builtins
 * @comd: the command
 * @argv: argument vector
 * @status: status of the program
 * @idx: index of the executing process
 */

void do_builtin(char **comd, char **argv,  int *status, int idx)
{
	if (_strcmp(comd[0], "exit") == 0)
		exit_shell(comd, argv, status, idx);
	if (_strcmp(comd[0], "env") == 0)
		print_environ(comd, status);
}

/**
 * exit_shell - exits shell if exit is typed
 * @comd: the command
 * @argv: argument vector
 * @status: status of the program
 * @idx: index of the executing process
 */

void exit_shell(char **comd, char **argv, int *status, int idx)
{
	int value = (*status);
	char *indx, err_message[] = ": exit: Illegal number: ";

	if (comd[1])
	{
		if (is_positive(comd[1]))
		{
			value = _atoi(comd[1]);
		}
		else
		{
			indx = _itoa(idx);

			write(STDERR_FILENO, argv[0], _strlen(argv[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, indx, _strlen(indx));
			write(STDERR_FILENO, err_message, _strlen(err_message));
			write(STDERR_FILENO, comd[1], _strlen(comd[1]));
			write(STDERR_FILENO, "\n", 1);

			free(indx);
			_freearray(comd);
			(*status) = 2;
			return;
		}
	}
	_freearray(comd);
	exit(value);
}

/**
 * print_envron - prints the environment variables to stdout
 * @comd: the comand (env)
 * @status: status of process
 */

void print_environ(char **comd, int *status)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		_printS(environ[i]);
		_putchar('\n');
	}
}
