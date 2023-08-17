#include "main.h"
/**
 * main - Function that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);

}
void print_alphabet(void)
{
       	int n = 97;
	while(n <= 122)
	{	_putchar(n);
                n++;
        }	
	_putchar('\n');
}
