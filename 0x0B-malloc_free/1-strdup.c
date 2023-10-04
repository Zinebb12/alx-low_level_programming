#include "main.h"
#include <stdlib.h>

/**
 * _strdup - dupicate the new memory
 * @str: string to copy
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *something;
	int i, lenght = 0;

	if (str == NULL)
		return (NULL);
	while (str[lenght])
		lenght++;
	something = malloc(sizeof(char) * (lenght + 1));
	if (something == NULL)
		return (NULL);
	for (i = 0; i < lenght; i++)
		something[i] = str[i];
something[lenght] = '\0';
	return (something);
}

