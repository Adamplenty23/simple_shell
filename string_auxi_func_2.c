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
		else
		{
			return (0);
		}
	}
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
