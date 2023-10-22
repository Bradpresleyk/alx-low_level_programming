#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - Reallocates aa block of memory
 * @ptr: Previous allocated memory
 * @old_size: Size of old memory
 * @new_size: Size of new memory
 * Return: returns newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
	{
	return (malloc(new_size));
	}
	if (new_size == old_size)
	{
	return (ptr);
	}
	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
	return (NULL);
	}
	size_t min_size = (old_size < new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, min_size);

	free(ptr);

	return (new_ptr);
}
/**
 * main - Reallocate memory
 * Return: 0 Success
 */
int main(void)
{
	unsigned int old_size = 5;
	unsigned int new_size = 10;

	int *ptr = (int *)malloc(old_size * sizeof(int));

	if (ptr == NULL)
	{
	fprintf(stderr, "Memory allocation failed.\n");
	return (1);
	}
	for (unsigned int i = 0; i < old_size; i++)
	{
	ptr[i] = i * 2;
	}
	for (unsigned int i = 0; i < old_size; i++)
	{
	printf("%d ", ptr[i]);
	}
	printf("\n");

	ptr = _realloc(ptr, old_size * sizeof(int), new_size * sizeof(int));

	for (unsigned int i = 0; i < new_size; i++)
	{
	printf("%d ", ptr[i]);
	}
	printf("\n");

	free(ptr);

	return (0);
}
