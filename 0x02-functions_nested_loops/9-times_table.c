#include "main.h"
#include <stdio.h>

/**
 * times_table - Display the 9 time table
 *
 * Description: print the 9  time table
 *
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				printf("%d", i * j);
			}
			else
			{
				printf("%3d", i * j);
			}
			if (j < 9)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
