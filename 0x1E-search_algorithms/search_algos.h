#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

/* Libraries needed */
#include <stdio.h>
#include <math.h>
#include <stddef.h>

/* Function prototype for search algorithm*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int bin_search(int *array, int low, int high, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGO_H */
