#include "main.h"

/**
 * time_table - pint multiplication table
 */

void time_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; column++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = (row * column);

			if (column == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}

