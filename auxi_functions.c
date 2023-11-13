#include "main.h"

/**
 * _freearray - frees an array
 * @array: the array to free
 */

void _freearray(char **array)
{
	int i;

	if (array == NULL)
		return;

	for (i = 0; array[i]; i++)
	{
		free(array[i]);
		array[i] = NULL;
	}

	free(array);
	array = NULL;
}
