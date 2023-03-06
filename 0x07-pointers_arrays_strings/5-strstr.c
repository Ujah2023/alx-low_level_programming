#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: Pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char * 1 = haystack;
		char *p = needle;

		while (*1 == *p && *p != '\0')
		{
			1++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
