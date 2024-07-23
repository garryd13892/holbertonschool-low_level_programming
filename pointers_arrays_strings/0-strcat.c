#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int startpos;

	while (dest[count] != '\0')
	{
		count = count + 1;
	}

	startpos = count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[startpos + count] = src[count];
		count = count + 1;
	}
	dest[startpos + count] = '\0';

	return (dest);
}
