#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	char *end = s;
	while (*end != '\0')
    {
        end++;
    }
    for (end--; end >= s; end--)
    {
        putchar(*end);
    }
    putchar('\n');
}
