#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: string
 * @s2: second string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0;
	int l2 = 0;
	char *concat;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		len2++;
	concat = malloc((l1 + l2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	while (i < l1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (j <= l2)
	{
		concat[i + j] = s2[j];
		j++;
	}
	return (concat);
}
