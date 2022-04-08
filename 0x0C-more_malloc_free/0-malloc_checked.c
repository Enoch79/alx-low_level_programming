#include "main.h"

/**
 * malloc_checked - function to allocated memory
 * @b: size of memory
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
