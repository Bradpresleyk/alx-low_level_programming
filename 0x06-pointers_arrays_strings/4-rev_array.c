#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Function that reverses an array of integers
 * @a: Array
 * @n: Number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
	t = a[i];
	a[i] = a[n];
	a[n] = t;
	}
}
