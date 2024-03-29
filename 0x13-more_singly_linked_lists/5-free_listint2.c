#include "lists.h"
#include "4-free_listint.c"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of a list
 */

void free_listint2(listint_t **head)
{
	if (!(head))
	{
		return;
	}
	free_listint(*head);
	*head = NULL;
}
