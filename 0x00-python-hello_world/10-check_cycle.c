#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - this function checks for cycles in a loop
 * @list: list to take in
 *
 * Return: return integer value
 */

int check_cycle(listint_t *list)
{
	listint_t *initial, *subsequent;

	initial = list;
	subsequent = list;

	while (initial != NULL && subsequent != NULL)
	{
		initial = initial->next;

		if (subsequent->next)
			subsequent = subsequent->next->next;

		if (initial == subsequent)
			return (1);
	}

	return (0);
}
