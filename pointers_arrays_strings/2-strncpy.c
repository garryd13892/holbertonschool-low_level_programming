#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	int null = 0;
	int src_end = 0;

	while (dest[count] != '\0')
	{
		if (src[count] == '\0')
		{
			src_end = 1;
		}

		if (count < n)
		{
			if (src_end == 1)
			{
				dest[count] = null;
			}
			else
			{
				dest[count] = src[count];
			}
		}

		count = count + 1;
	}

	return (dest);
}
