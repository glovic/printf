#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Description: Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string @str. Memory is allocated with malloc()
 * and can be freed for free().
 *
 * Return: A pointer to the duplicated string, NULL on failure.
 */
char *_strdup(const char *str)
{
	char *dup_str;
	int i = 0;

	if (str == NULL)
		return (NULL); /* handle invalid string */

	dup_str = malloc(_strlen(str) + 1);

	if (dup_str == NULL)
		return (NULL);

	/* duplicate string - a copy process */
	while (str[i] != '\0')
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';

	return (dup_str);
}
