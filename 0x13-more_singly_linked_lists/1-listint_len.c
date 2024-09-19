#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Description: This function calculates and returns the number of nodes
 * in the provided linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;  
	while (h)
	{
		num++;      
		h = h->next; 
	}

	
	return (num);
}

