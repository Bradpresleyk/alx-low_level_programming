#include <stdio.h>
/**
 * main - Function that prints 0-9
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for(n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
