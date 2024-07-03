#include "main.h"

void more_numbers(void)
{
	char c;
	int i;
	for  (i=0;i<10;i++)
	{
		for (c=0;c<=14;c++)
		{
		if(c/10>0)
			_putchar((c/10)+'0');
		_putchar((c%10)+'0');
		}
	_putchar('\n');
	}
	
}
