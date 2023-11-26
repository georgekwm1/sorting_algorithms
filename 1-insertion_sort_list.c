#include "sort.h"
/**
 * swap_nodes - Swap two nodes in a doubly-linked list.
 * @h: Head pointer
 * @n2: The second node to swap.
 */
void swap_node(listint_t **h, listint_t **num1, listint_t *num2)
{
	(*num1)->next = num2->next;
	if (num2->next != NULL)
    {
		num2->next->prev = *num1;
    }
	num2->prev = (*num1)->prev;
	num2->next = *num1;
	if ((*num1)->prev != NULL)
    {
		(*num1)->prev->next = num2;
    }
	else
    {
		*h = num2;
    }
	(*num1)->prev = num2;
	*num1 = num2->prev;
}

/**
 * insertion_sort_list - Sorts list by insertion
 *
 * @list: Head of list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iterate, *insert, *temp;

	if (*list == NULL || (*list)->next == NULL)
		return;

	for (iterate = (*list)->next; iterate != NULL; iterate = temp)
	{
		temp = iterate->next;
		insert = iterate->prev;
		while (insert != NULL && iterate->n < insert->n)
		{
			swap_node(list, &insert, iterate);
			print_list((const listint_t *)*list);
		}
	}
}

