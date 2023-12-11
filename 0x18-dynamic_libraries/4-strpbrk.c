#include "main.h"
/**
 * _strpbrk - search in the string
 * @s: pointer to the string to be searched
 * @accept: pointer to the set to be matched
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
		if (*s == accept[r])
		return (s);
		}
	s++;
	}

return ('\0');
}
