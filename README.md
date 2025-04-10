Collecting workspace information# Sorting Algorithms Project

This repository contains implementations of various sorting algorithms in C, focusing on their functionality, complexity, and efficiency.

## Implemented Sorting Algorithms

1. **[Bubble Sort](0-bubble_sort.c)**
   - Time Complexity: O(n) best, O(n²) average, O(n²) worst
   - Sorts an array by repeatedly comparing adjacent elements and swapping them if they're in the wrong order.

2. **[Insertion Sort](1-insertion_sort_list.c)**
   - Time Complexity: O(n) best, O(n²) average, O(n²) worst
   - Builds a sorted list one item at a time by repeatedly taking the next item and inserting it into its correct position.

3. **[Selection Sort](2-selection_sort.c)**
   - Time Complexity: O(n²) best, O(n²) average, O(n²) worst
   - Repeatedly selects the smallest element from the unsorted portion and puts it at the end of the sorted portion.

4. **[Quick Sort](3-quick_sort.c)**
   - Time Complexity: O(n log n) best, O(n log n) average, O(n²) worst
   - Uses a divide-and-conquer approach; selects a pivot element and partitions the array around the pivot.

## Data Structures

The project uses the following data structure for doubly linked lists:

```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Helper Functions

- **print_array.c**: Prints the elements of an integer array
- **print_list.c**: Prints the elements of a doubly linked list

## Compilation and Usage

Each sorting algorithm has its own main function for testing:
- 0-main.c - Bubble Sort
- 1-main.c - Insertion Sort
- 2-main.c - Selection Sort
- 3-main.c - Quick Sort

To compile and run:

```bash
gcc -Wall -Wextra -Werror -pedantic <main-file> <sort-algorithm> print_array.c print_list.c -o <output-name>
./<output-name>
```

Example:
```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-bubble_sort.c print_array.c -o bubble
./bubble
```

## Big O Notations

Each algorithm has an associated file documenting its time complexity:
- 0-O - Bubble Sort
- 1-O - Insertion Sort
- 2-O - Selection Sort
- 3-O - Quick Sort

## Author

Stephane and Guillaume