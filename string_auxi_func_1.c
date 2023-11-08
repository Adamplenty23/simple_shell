#include "main.h"

/**
 * *_strncat - concatanates n bytes from src
 *
 * @dest: Destination variable
 * @src: source variable
 * @n: number of src to append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len1;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
