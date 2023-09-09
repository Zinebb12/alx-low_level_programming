#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Desription: this code generate a randome number
 *
 *Return: always (0) for success
*/
int main(void)
{
	char ch = 'a';
	char ch1 = 'A';

	while (ch <= 'z')
	{
	putchar(ch);

	ch++;
	}
	while (ch1 <= 'Z')
	{
	putchar(ch1);
	ch1++;
	}
	putchar('\n');
	return (0);
}
