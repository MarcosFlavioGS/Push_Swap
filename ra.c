#include "push_swap.h"

void	ra(t_node *head)
{
	t_node	*curr;
	int		temp;

	curr = head;
	while (curr && curr->next)
	{
		temp = curr->x;
		curr->x = curr->next->x;
		curr->next->x = temp;
		curr = curr->next;
	}
	ft_printf("ra\n");
	print_linkdlst(head);
}
