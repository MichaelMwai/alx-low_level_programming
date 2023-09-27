#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL; // Pointer to the previous node
    listint_t *current = *head; // Pointer to the current node

    while (current != NULL)
    {
        listint_t *next_node = current->next; // Pointer to the next node

        current->next = prev; // Reverse the link

        // Move to the next nodes
        prev = current;
        current = next_node;
    }

    *head = prev; // Update the head pointer to the new first node

    return *head; // Return the new head of the reversed list
}

