#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Display the n time table
 *
 * @n: the multiplication table value
 *
 * Description: print the n time table
 *
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					printf("%d", i * j);
				}
				else
				{
					printf("%4d", i * j);
				}
				if (j < n)
				{
					printf(",");
				}
			}
			printf("\n");
		}
	}
}
