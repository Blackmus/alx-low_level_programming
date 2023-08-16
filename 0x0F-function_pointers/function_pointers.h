#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /* Include this header for the size_t type */

/* Corrected prototypes */
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */