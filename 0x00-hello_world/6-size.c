#include <stdio.h>
/**
 * main - A program that print the sizes of various data types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	float d;

printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(d));
}
