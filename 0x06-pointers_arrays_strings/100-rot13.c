#include "main.h"
#include <stdio.h>

/**
 * rot13 -  the main function
 *
 * @s:  the String pointer
 *
 * Return:  the String function
 */

char *rot13(char *s)
{
	int a, r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (s[a] == data1[b])
	{
	s[a] = datarot[b];
	break;
	}
	}
	}
	return (s);
}


