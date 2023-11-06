#include "main.h"

/**
 * main - entry point
 *
 * @ac: the argument count
 * @av: the argument value
 *
 * Return: 0 for success, -1 for failure
 */

int main(int ac, char **av)
{
	int count;

	for (count = 1; av[count]; count++)
	{
		printf("%s\n", av[count]);
	}
	return (0);
}
