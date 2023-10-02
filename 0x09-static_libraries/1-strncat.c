#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (*(dest + a) != '\0')
		a++;

	while (*(src + b) != '\0' && a < 97 && b < n)
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	*(dest + a) = '\0';
	return (dest);
}
