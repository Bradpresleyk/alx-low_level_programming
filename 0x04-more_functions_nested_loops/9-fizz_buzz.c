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
	printf("Fizz\n");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz\n");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz\n");
	}
	else
	{
	printf("%d\n", i);
	}
	}
	return (0)
}
