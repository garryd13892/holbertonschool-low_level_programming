#include "main.h"
#include <stdio.h>
void puts2(char *str)
{
	while(*str!='\0')
	{
		_putchar(*str);
		str=str+2;
	}
	_putchar('\n');
}
