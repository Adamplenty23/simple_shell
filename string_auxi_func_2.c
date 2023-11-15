#include "main.h"

/**
 * _isdigit - check for digits
 *
 * @c: the variable to check
 *
 * Return: 1 for positive case 0 for otherwise
 */

int _isdigit(const char *c)
{
	unsigned int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] >= 48 && c[i] <= 57)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * _itoa - converts an integer to string
 * @n: the number
 * Return: string from int
 */

char *_itoa(int n)
{
	char buf[20];
	int i = 0;

	if (n == 0)
		buf[i++] = '0';
	else
	{
		while (n > 0)
		{
			buf[i++] = (n % 10) + '0';
			n /= 10;
		}
	}
	buf[i] = '\0';
	rev_string(buf);

	return (_strdup(buf));
}
/**
 * _strncmp - a function that compares string up to index i
 * @str1: first string to be compared
 * @str2: second string
 * @i: the index
 * Return: 0 for success
 */
int _strncmp(const char *str1, const char *str2, size_t i)
{
	for (; i > 0; i--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (*str1 == '\0')
			break;
		str1++;
		str2++;
	}
	return (0);
}

/**
 * is_positive - checks if a number is positive
 * @str: string to check
 * Return: 1 on success and 0 otherwise
 */

int is_positive(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
