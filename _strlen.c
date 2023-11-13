#include "main.h"

/**
 * _strlen - Get the length of a string.
 * @str: The string.
 * Return: Length of @str.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
	{
		len++;
	}

	return (len);
}
