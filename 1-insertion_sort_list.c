#include "sort.h"

/**
 * insertion_sort_list - Sorts list by insertion
 *
 * @list: Head of list
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *sorted = NULL;
    
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    while (*list != NULL)
    {
        listint_t *current = *list;
        *list = (*list)->next;

        if (sorted == NULL || sorted->n >= current->n)
        {
            current->next = sorted;
            current->prev = NULL;
            if (sorted != NULL)
                sorted->prev = current;
            sorted = current;
        }
        else
        {
            listint_t *temp = sorted;
            while (temp->next != NULL && temp->next->n < current->n)
                temp = temp->next;

            current->next = temp->next;
            if (temp->next != NULL)
                temp->next->prev = current;
            current->prev = temp;
            temp->next = current;
            print_list(sorted);
        }

        
        
    }

    
    while (sorted != NULL && sorted->prev != NULL)
        sorted = sorted->prev;

    *list = sorted; 
}

