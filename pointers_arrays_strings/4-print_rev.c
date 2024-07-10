#include "main.h"
#include <stdio.h>
void print_rev(char *s)
{
	while(*s=='\0')
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
