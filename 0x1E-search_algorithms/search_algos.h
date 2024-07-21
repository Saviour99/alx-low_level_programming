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

/*
listint_t *jump_list(listint_t *list, size_t size, int value);
void print_list(const listint_t *list);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
skiplist_t *linear_skip(skiplist_t *list, int value);
*/

/* Structures*/
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

#endif /* SEARCH_ALGO_H */
