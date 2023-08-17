#include <unistd.h>
#include "main.h"
/**
 * print - Function that prints the alphabet ten times
*/
void 2-print_alphabet_x10.c(void)
{
	int n = 97;
	int m = 0;

	while (m <= 10)
	{
		while(n <= 122)
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
