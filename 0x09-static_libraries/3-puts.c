#include "main.h"
#include <unistd.h>
/**
 * _puts - Function that prints a string followed by a newline
 * @str: The string to be printed
 */
void _puts(char *str)
{
        while (*str != '\0')
        {
        _putchar(*str);
        str++;
        }
        _putchar('\n');
}
