#include <stdio.h>
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int i;

	for(i = 0; b[i] != '\0'; i++)
	{
	if(b[i] != b[0] || b[i] != b[1] || b == NULL)
	{
	return(0);
	}
	}
	return (b);
}
