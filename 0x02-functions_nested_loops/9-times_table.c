#include <unistd.h>
#include "main.h"
/**
 * times_table - Function prints nine times table
 * Return: 0 (Success)
 */
int times_table(void)
{
	int n = 9;
	int i, j;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;
	
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
					_putchar(result + '0');
				}
					_putchar('\n');
		}
		return (0);
	}
}
