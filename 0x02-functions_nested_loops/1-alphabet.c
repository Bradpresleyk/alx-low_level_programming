#include <stdio.h>
/**
 * main - Function that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
	
}
void print_alphabet(void)
{
                int n = 97;
                while(n <= 122)
        {
                putchar(n + 1);
                n++;
        }
        putchar('\n');
}
