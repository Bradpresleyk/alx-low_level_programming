#include <unistd.h>
#include "main.h"
/**
 * print - Function that prints the alphabet ten times
*/
void print_alphabet_x10(void)
{
	int m = 0;

	while (m < 10)
	{
		int n = 97;
		while(n <= 122)
		{
			_putchar(n);
			n++;
		}
		m++;
		_putchar('\n');
	}
}
