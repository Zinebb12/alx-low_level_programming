#include "main.h"
/**
 * _strspn - lenght of matching initial characters
 * @s: string to be checked
 * @accept: string with matching characters
 * Return: lenght of the initial segment with the matching characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
