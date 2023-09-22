#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Difference
 */
int _strcmp(char *s1, char *s2);
{
	int z;

	for (z = 0; s1[z] && s2[z] && s1[z] == s2[z]; z++)
		;
	return (s1[z] - s2[z]);
}
