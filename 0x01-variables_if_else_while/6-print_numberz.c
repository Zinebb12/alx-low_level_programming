#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Description: this code generate a random number
 *
 *Return: always (0) for success
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	putchar('0' + num);
	num++;
	}
	putchar('\n');
	return (0);
}
