#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Description: This function prints all the integer elements in the
 * provided linked list and counts the number of nodes in the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
    size_t num = 0;  // Initialize a variable to count nodes

    // Iterate through the linked list while it's not NULL
    while (h)
    {
        // Print the value of the current node's 'n' member
        printf("%d\n", h->n);

        // Increment the node count
        num++;

        // Move to the next node in the list
        h = h->next;
    }

    // Return the total number of nodes in the list
    return (num);
}

