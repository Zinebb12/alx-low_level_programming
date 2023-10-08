
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry function
 * @argc: number of arguments count
 * @argv: array of arguments vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nm, j, something;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nm = atoi(argv[1]);
	something = 0;

	if (nm < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && nm >= 0; j++)
	{
		while (nm >= coins[j])
		{
			something++;
			nm -= coins[j];
		}
	}

	printf("%d\n", something);
	return (0);
}

