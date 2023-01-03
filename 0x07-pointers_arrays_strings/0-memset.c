#include "main.h"

/**
 * _memset-Fills the first n bytes of the memory area
 * pointed to by @s with constant byte @c.
 * @s: A pointer to the memory ara to be filled.
 * @c: the character to fill the memory area with.
 * @n: the character number of bytes to be filled.
 * description_memeset: over there
 *Reurn: Apointer to the filled memory area @s.
 */

void *_memset(void *s, int c, size_t n)
{
	 unsigned int index;
	 unsigned char *memory = s, value = c;

	 for (index = 0; index < n; index++) memory[index] = value;
		return (memory);
}
