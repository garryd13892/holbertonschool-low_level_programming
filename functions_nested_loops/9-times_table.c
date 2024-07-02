#include "main.h"

void times_table(void)
{
	int i,j,m;
		for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i* j;
			if (j == 0)
			{
				_putchar('0' + m);
			}
			else if (m <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else if (m > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
		}
		_putchar('\n');
	}
}
