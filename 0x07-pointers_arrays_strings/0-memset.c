#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: The character to be fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, valve = b;

	for (index = 0; index < n; index++)
		memory[index] = valve;
	return (memory);
}
