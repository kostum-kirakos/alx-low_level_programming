#ifndef search_algos_h
#define search_algos_h

#include <stddef.h>
#include <stdio.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
