#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: Maximum number of bytes from s2 to concatenate
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *s;
	unsigned int i = 0, j = 0, lenght1 = 0, lenght2 = 0;

	while (s1 && s1[lenght1])
		lenght1++;
	while (s2 && s2[lenght2])
		lenght2++;

	if (n < len2)
		s = malloc(sizeof(char) * (lenght1 + n + 1));
	else
		s = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

	if (!s)
		return (NULL);

	while (i < lenght1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lenght2 && i < (lenght1 + n))
		s[i++] = s2[j++];

	while (n >= lenght2 && i < (lenght1 + lenght2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
