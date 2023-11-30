#include "lists.h"

/**
 * check_cycle - checks if the linked list contains a cycle or not
 * @list: the linked list needed
 *
 * Return: 0 if the list does not contain a cycle, 1 if list contains a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
