#include "lists.h"
/**
 * print_dlistint - Prints a dlistint_t list
 * @h: Head
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int len = 0;

while (h)
{
printf("%d\n", h->n);
++len;
h = h->next;
}
return (len);
}
