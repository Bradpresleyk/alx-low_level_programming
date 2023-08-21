#include <stdio.h>
/**
 * main - Function that prints numbers 0-100 except multiples of 3,5 3 and 5
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
	if (i % 3 == 0)
	{
	printf("Fizz");
	printf('\n');
	}
	else if (i % 5 == 0)
	{
	printf("Buzz");
	printf('\n')
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz");
	printf('\n')
	}
	else
	{
	printf(i);
	printf('\n');
	}
	}
	return (0)
}
