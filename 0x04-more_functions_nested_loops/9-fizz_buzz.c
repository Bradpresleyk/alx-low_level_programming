#include <stdio.h>
/**
 * main - Function that prints numbers 0-100 except multiples of 3,5 3 and 5
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 != 0)
	{
	printf(" Fizz");
	}
	else if (i % 5 == 0 && i % 3 != 0)
	{
	printf(" Buzz");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf(" FizzBuzz");
	}
	else if (i == 1)
	{
	printf("%d", i);
	}
	else
	{
	printf(" %d", i);
	}
	}
	printf("\n");
	return (0);
}
