#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = result = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[result] != '\0')
		result++;
	conct = malloc(sizeof(char) * (i + result + 1));

	if (conct == NULL)
		return (NULL);
	i = result = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[result] != '\0')
	{
		conct[i] = s2[result];
		i++, result++;
	}
	conct[i] = '\0';
	return (conct);
}

