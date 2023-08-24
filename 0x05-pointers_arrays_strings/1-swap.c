#include "main.h"
#include <unistd.h>
/**
 * swap_int - Function that swaps the values of integers
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
