#include"main.h"

/**
 * print_times_table - print the  time table of n
 *
 * @n: takes input
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	{
		for (z = 0; z <= n; ++z)
		{
			 _putchar(48);
			for (y = 1; y <= n; ++y)
			{
				_putchar(',');
				_putchar(' ');

				x = z * y;

				if (x <= 9)
					_putchar(' ');
				if (x <= 99)
					 _putchar(' ');

				if (x >= 100)
				{

					_putchar((x / 100) + 48);
					_putchar((x / 10) % 10 + 48);
				} else if (x <= 99 && x >= 10)
					_putchar((x / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
