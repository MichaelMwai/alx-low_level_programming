#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees 1 linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head) /* head function */
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

