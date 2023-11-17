#include "main.h"
/**
 * _gettline - a function that reads a line from stdin
 * @linept: a pointer to line
 * @i: content of the line
 * @stream: location
 * Return: the content of the line
 */
ssize_t _gettline(char **linept, size_t *i, FILE *stream)
{
	size_t char_read = 0, rt = -1;
	size_t total = *i, old_size;
	char *line_get = *linept;
	char *new_line;
	int b;

	if (linept == NULL || i == NULL || stream == NULL)
		return (-1);
	if (line_get == NULL || total == 0)
	{
		total = 128;
		line_get = (char *)malloc(sizeof(char) * total);
		if (line_get == NULL)
			return (-1);
	}
	while ((b = fgetc(stream)) != EOF)
	{
		if (char_read >= total - 1)
		{
			total *= 2;
			old_size = total * sizeof(char);
			new_line = (char *)_realloc(line_get, old_size, total * sizeof(char));
			if (new_line == NULL)
			{
				free(line_get);
				return (-1);
			}
			line_get = new_line;
		}
		line_get[char_read++] = (char)b;
		if (b == '\n')
			break;
	}
	line_get[char_read] = '\0';
	*linept = line_get;
	*i = total;

	return ((char_read == 0 && b == EOF) ? rt : char_read);
	free(line_get);
	free(new_line);
	free(linept);
}
