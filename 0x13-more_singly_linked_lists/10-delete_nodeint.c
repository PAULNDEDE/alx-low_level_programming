#include "lists.h"

/**
 * delete_nodeint_at_index - deleting node in a linked list at a certain index
 * @head: pointer to the first element in the list input
 * @index: index of the node to delete input
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *now = NULL;

	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	now = temp->next;
	temp->next = now->next;
	free(now);
	return (1);
}
