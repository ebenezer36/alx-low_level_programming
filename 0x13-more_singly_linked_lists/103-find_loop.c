#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rashida, *abdul;

	rashida = abdul = head;
	while (rashida && abdul && abdul->next)
	{
		rashida = rashida->next;
		abdul = abdul->next->next;
		if (rashida == abdul)
		{
			rashida = head;
			break;
		}
	}
	if (!abdul || !abdul || !abdul->next)
		return (NULL);
	while (rashida != abdul)
	{
		rashida = rashida->next;
		abdul = abdul->next;
	}
	return (abdul);
}
