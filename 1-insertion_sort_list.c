#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: head pointer to the list
 * Return: Always 0
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *previous;

	if (!*list || !(*list)->next)
	{
		return;
	}
	current = (*list)->next;
	while (curr)
	{
		next = current->next;

		while (current->prev != NULL && current->prev->n > current->)
		{
			previous = current->prev;
			if (current->next != NULL)
				current->next->prev = previous;
			previous->next = current->next;
			current->next = previous;
			current->prev = previous->prev;

			if (previous->prev != NULL)
				previous->prev->next = current;

			previous->prev = current;
			if (current->prev == NULL)
			{
				*list = current;
			}
			print_list(*list);
		}
		current = next;
	}
}
