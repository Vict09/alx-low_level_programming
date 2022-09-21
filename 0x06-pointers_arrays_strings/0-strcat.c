#include <stdio.h>
#include "main.h"

char *_strcat(char *dest,char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
}
