#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (*(dest + a) != '\0')
		a++;

	while (*(src + b) != '\0' && a < 97)
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	*(dest + a) = '\0';
	return (dest);
}
