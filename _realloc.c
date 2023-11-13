#include "main.h"

/**
 * _realloc - Reallocates dynamic memory.
 * @old_mem_blk: Pointer to old memory.
 * @old_size: Old size of the memory block.
 * @new_size: New size for reallocation.
 *
 * Description: Resizes the memory block. If successful, returns a pointer to
 * the new memory; otherwise, returns NULL.
 */
void *_realloc(void *old_mem_blk, size_t old_size, size_t new_size)
{
	void *new_mem_blk;
	size_t min_size;

	if (new_size == old_size)
		return (old_mem_blk); /* nothing to do, old and new sizes are the same */

	/* handle the free() equivalent call of the _realloc function */
	if (new_size == 0 && old_mem_blk != NULL)
	{
		free(old_mem_blk);
		return (NULL);
	}

	new_mem_blk = malloc(new_size);
	if (new_mem_blk == NULL)
		return (NULL); /* memory allocation failed */

	if (old_mem_blk != NULL)
	{
		min_size = (old_size < new_size) ? old_size : new_size;
		/* copy the data from old memory block to new memory block */
		_memcpy(new_mem_blk, old_mem_blk, min_size);

		free(old_mem_blk); /* free old allocated memory block */
	}

	return (new_mem_blk);
}
