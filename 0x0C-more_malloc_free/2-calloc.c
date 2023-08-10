#include "main.h"
#include <stdlib.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The byte to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Description: This function fills the first @n bytes of the memory area
 * pointed to by @s with the constant byte @b.
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *ptr = s;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (ptr);
}

/**
 * _callocs - Allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Description: This function allocates memory for an array of @nmemb elements,
 * each of @size bytes. The memory is initialized with zeros.
 *
 * Return: A pointer to the allocated memory, or NULL if failure
 */
void *_callocs(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);
return (ptr);
}

