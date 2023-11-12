#include "main.h"

/**
 * _free - Safely frees dynamically allocated memory.
 * @ptr: Pointer to memory location.
 *
 * Description: This _free() function releases dynamically allocated
 * memory, ensuring that the pointer @ptr is not NULL before attempting
 * to free it. After the memory is freed, the @ptr is set to NULL to
 * prevent potential issues with dangling pointers.
 */
void _free(void **ptr)
{
	if (ptr != NULL && *ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
