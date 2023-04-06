
/**
 *add_dnodeint - function that adds a new node at the beginning
 *@n: int
 *@head: points node
 *Return: *head
 *NULL: pointer to the previous node (when the new node is the head)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
/**
 *'new->next = *head' - Establece el puntero al siguiente nodo como el puntero
 *a la cabeza de la lista actual.
 *'new->prev = NULL' - Establece el puntero al nodo anterior como NULL
 *porque este es el primer nodo en la lista.
 */
	if (*head != NULL) /*NULL: pointer to the previous node*/
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
