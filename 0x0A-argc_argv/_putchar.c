#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes character C to stdout
 * @c: the character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
