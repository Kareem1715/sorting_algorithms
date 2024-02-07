#include "sort.h"

void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2);

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order
 * @list: This is a list of integars
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cNode; /* Current node */

	if (!list)
		return;

	cNode = *list;
	while (cNode)
	{
		/* while prev node is exist & the next node < prev node */
		while (cNode->prev && cNode->prev->n > cNode->n)
		{
			swap_nodes(list, cNode->prev, cNode);
			print_list(*list);
		}
		cNode = cNode->next;
	}
}

/**
 * swap_nodes - Swaps two adjecent nodes
 * @head: The head node of list
 * @node1: First node to swap
 * @node2: Second node to swap
 */
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	if (*head == node1)  /* If the head of list is the first node  */
		(*head) = node2;/* make the head point to the second node */

	node1->next = node2->next;
	if (node2->next)
		node2->next->prev = node1;

	node2->prev = node1->prev;
	if (node1->prev)
		node1->prev->next = node2;

	node2->next = node1;
	node1->prev = node2;
}
