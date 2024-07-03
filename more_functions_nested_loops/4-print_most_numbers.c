#include "main.h"

void print_most_numbers(void)
{
	int c;

	while(c<=9)
	{
		if(c==2 || c==4)
		{
		c++;
		}
		else 
		_putchar(c);
	}
	_putchar('\n');
}
