#ifndef SORT_H
#define SORT_H

/*Defining listint_t type */

typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;



/*These are the Function prototypes*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif
