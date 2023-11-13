#include "main.h"

/**
 * _strchr - Locate character in the string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Description: Returns a pointer to the first occurrence of the character
 * @c in the string @s. If not found, returns NULL.
 *
 * Return: Pointer to the matched character or NULL if not found.
 */
char *_strchr(const char *s, int c)
{
	char *tmp_str = (char *) s;

	/* handle empty string */
	if (tmp_str == NULL)
		return (NULL);

	while (*tmp_str != '\0')
	{
		if (*tmp_str == c)
			return (tmp_str); /* match found */
		tmp_str++;
	}
	/* return a pointer to the null byte if 'c' is a null byte. */
	if (c == '\0')
		return (tmp_str);

	return (NULL); /* no match found or end of string - return NULL */
}
