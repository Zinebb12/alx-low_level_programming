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
	int d = 48;

	while (d <= 102)
	{
	putchar(d);

	if (d == 57)
	d += 39;
	d++;
	}
	putchar('\n');
	return (0);
}
