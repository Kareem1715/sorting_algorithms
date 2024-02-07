# Sorting algorithms & Big O
In this project we will learn about sorting alogrithms and big O notation.

# Learning Objectives
- [x] At least four different sorting algorithms
- [x] What is the Big O notation, and how to evaluate the time complexity of an algorithm
- [x] How to select the best sorting algorithm for a given input
- [x] What is a stable sorting algorithm

# Data Structure and Functions
For this project you are given the following print_array, and print_list functions:

- Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```c
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

- Please use the following data structure for doubly linked list:
```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

# Tests
Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)


