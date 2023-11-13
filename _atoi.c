#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @nptr: String containing the number to convert.
 *
 * Return: The converted value.
 */
int _atoi(const char *nptr)
{
	int number = 0;

	while (isdigit(*nptr))
	{
		number = number * 10 + (*nptr - '0');
		nptr++;
	}
	return (number);
}
