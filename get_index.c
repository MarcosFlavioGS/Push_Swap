#include "push_swap.h"

void	get_index(t_node *head, int len)
{
	t_node	*curr;
	t_node	*curr2;
	int		counter;

	curr = head;
	while (curr)
	{
		counter = 0;
		curr2 = head;
		while (curr2)
		{
			if (curr2->x > curr->x)
				counter += 1;
			curr2 = curr2->next;
		}
		curr->index = (len - counter);
		curr = curr->next;
	}
}
