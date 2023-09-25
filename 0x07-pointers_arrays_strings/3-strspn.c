#include "main.h"
/**
 * _strspn - lenght of matching initial characters
 * @s: string to be checked
 * @accept: string with matching characters
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; r++)
		{
			if (*s == accept[b])
			{
				n++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
