#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all integer from n to 98
 *
 * @n: limit
 *
 * Description: prints all natural numbers from n to 98
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
