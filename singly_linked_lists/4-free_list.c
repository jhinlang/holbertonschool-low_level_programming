#include "lists.h"
/**
 *free_list - frees a list_t list
 * @head: pointer to the first node of the list
 * 
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head; // stocker le noeud actuel
		head = head->next;// avancer au noeud suivant
		free(tmp->str);//libérer la chaine  str du noeud
		free(tmp);//libérer le noeud lui même
	}
}