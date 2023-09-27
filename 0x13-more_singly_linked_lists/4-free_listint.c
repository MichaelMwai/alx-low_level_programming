#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
    listint_t *current; // Pointer to traverse the list

    while (head != NULL)
    {
        current = head;   // Save the current node
        head = head->next; // Move to the next node
        free(current);     // Free the current node
    }
}

