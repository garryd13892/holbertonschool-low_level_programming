#include "main.h"

void print_alphabet_x10(void)
{
	char ch;
	int i;

	while (i<=9)
	{

		for(ch='a';ch<='z';ch++)
		{	
			_putchar(ch);
		}

	_putchar('\n');
	i++;
	}

}
