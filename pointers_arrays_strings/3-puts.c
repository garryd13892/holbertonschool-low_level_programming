#include "main.h"
#include <stdio.h>
void _puts(char *str)
{
	while(*str!='\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
