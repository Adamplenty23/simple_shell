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

/**
 * _realloc - reallocates a memory block
 * @ptr: memory of previously allocated block
 * @old_size: size of allocated memory of ptr
 * @new_size: new size of memory block
 * Return: pointer to the new memory reallocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
