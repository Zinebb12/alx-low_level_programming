#include "main.h"
/**
* _memset - is the entry point
* @s: pointer to the memory
* @b: constant byte
* @n: number of bytes
* return: 0 (success)
	*/
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
