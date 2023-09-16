#include "main.h"
/**
 * main - FizzBuzz
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{

	int i;

	for (i = 0; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("%i FizzBuzz", i);
	putchar(' ');
	}
	else if (i % 3 == 0 && !(i % 5 == 0))
	{
	printf("%i Fizz", i);
	putchar(' ');
	}
	else if (i % 5 == 0 && !(i % 3 == 0))
	{
	printf("%i Buzz", i);
	putchar(' ');
	}
	else
	printf("%i", i);
	if (i != 100)
	printf(" ");
	putchar('\n');
	}
	return (0);
}
