#include "main.h"

void more_numbers(void)
{
	int counter;
	int row = 0;

	while (row < 10)
	{
		counter = 0;
		while (counter <= 14)
		{
			if (counter > 9)
			{
				_putchar(ZERO + counter / 10);
			}
			_putchar(ZERO + counter % 10);
			counter++;
		}
	_putchar('\n');
	row++;
	}
}
