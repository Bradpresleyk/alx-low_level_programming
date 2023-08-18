#include <unistd.h>
#include "main.h"
/**
 *  print_to_98 - Prints all natural numbers from n to 98
 *  @n: the number to start printing from
 *  Return: 0 (Success)
 */
void print_to_98(int n)
{
    while (n <= 98)
    {
        if (n == 98)
        {
            _putchar((n / 10) + '0');
            _putchar((n % 10) + '0');
        }
        else
        {
            _putchar((n / 10) + '0');
            _putchar((n % 10) + '0');
            _putchar(',');
            _putchar(' ');
        }
        n++;
        _putchar('\n');
    }
}
