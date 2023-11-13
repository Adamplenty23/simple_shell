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

/**
 * _strdup - duplicates a given string
 * @str: string to duplicate
 * Return: pointer to new allocation space
 */

char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		len++;

	len = len + 1;

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}

/**
 * *_strchr - function that locates the first occurence of c
 * @s: string to search
 * @c: character to search
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

/**
 * rev_string - reverses string
 *
 * @s: string
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
