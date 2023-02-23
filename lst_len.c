#include "push_swap.h"

int	lst_len(t_node *head)
{
	t_node	*current;
	int		counter;

	current = head;
	counter = 0;
	while (current)
	{
		counter += 1;
		current = current->next;
	}
	return (counter);
}
