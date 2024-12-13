#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * @list: listint_t **
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current, *prev;

	if (!list || !(*list) || !(*list)->next)
		return;
	current = (*list)->next;

	while (current)
	{
		temp = current;
		prev = current->prev;
		while (prev && prev->n > current->n)
		{
			if (prev->prev)
			{
				prev->prev->next = temp;
				temp->prev = prev->prev;
			}
			else
			{
				temp->prev = NULL;
				*list = buff;
			}
			if (temp->next)
			{
				prev->next = temp->next;
				prev->next->prev = prev;
			}
			else
				prev->next = NULL;

			prev->prev = temp;
			temp->next = prev;
			print_list(*list);
			prev = temp->prev;
		}
		current = current->next;
	}
}
