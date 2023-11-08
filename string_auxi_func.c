#include "main.h"

/**
 * _strlen - returns the length of string
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - pointer copies string
 *
 * @dest: pointer variable
 * @src: pointer variable
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

/**
 * _strncpy - copies string of n bytes
 *
 * @dest: destination variable
 * @src: source variable
 * @n: number of strings to copy
 *
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: - 0 +
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}

/**
 * _strcat - concatenate strings
 *
 * @dest: destination variable
 * @src: source variable
 *
 * Return: pointer to dest variable
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{

	}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{

	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
