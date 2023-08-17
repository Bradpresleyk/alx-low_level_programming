#include <stdio.h>
/**
 * main - Function that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	void print_alphabet(void)
	{
		int n = 97;
		while(n <= 122)
	{
		putchar(n + 1);
		n++;
	}
	putchar('\n');
	return (0);
	}
}
