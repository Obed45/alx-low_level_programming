#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: integer value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, int n)
{
dlistint_t *new_node = NULL;
/* Create a new node with the specified integer value */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
/* Update the new node's next pointer to point to the current head node */
new_node->next = *head;
/* If the current head node is not NULL, update its prev pointer to point to the new node */
if (*head != NULL)
(*head)->prev = new_node;
/* Update the head pointer to point to the new node */
*head = new_node;
return (new_node);
}
