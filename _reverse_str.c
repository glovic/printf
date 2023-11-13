#include "main.h"

/**
 * _reverse_str - Reverses a string in place.
 * @buffer: The string to reverse.
 * @len: The length of the string.
 *
 * Description: Reverses the characters in the string @buffer in place.
 */
void _reverse_str(char *buffer, size_t len)
{
	size_t i, mid;
	char c;

	if (!buffer)
		return; /* invalid string, nothing to do here */
	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		c = buffer[i];

		/* swap values */
		buffer[i] = buffer[len - i - 1];
		buffer[len - i - 1] = c;
	}
}
