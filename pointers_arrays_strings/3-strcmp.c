#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int cmp;

	while (s1[count] != '\0')
	{
		cmp = s1[count] - s2[count];
		if (cmp != 0)
		{
			return (cmp);
		}

		count = count + 1;
	}
	if (s2[count] != '\0')
	{
		return (s2[count]);
	}

	return (0);
