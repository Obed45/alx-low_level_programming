#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: integer value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, int n)
{
dlistint_t *new_node = NULL;
dlistint_t *tail = *head;
/* Create a new node with the specified integer value */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
/* If the list is empty, the new node becomes the head node */
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
/* Traverse to the last node in the list */
while (tail->next != NULL)
tail = tail->next;
/* Update the new node's prev pointer to point to the current tail node */
new_node->prev = tail;
/* Update the current tail node's next pointer to point to the new node */
tail->next = new_node;
return (new_node);
}
