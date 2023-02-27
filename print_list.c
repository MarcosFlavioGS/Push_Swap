#include "push_swap.h"

void	print_linkdlst(t_node *head)
{
	t_node	*current;

	current = head;
	while (current)
	{
		ft_printf("Value: %d\n", current->x);
		ft_printf("Index: %d\n", current->index);
		ft_printf("Pos: %d\n", current->pos);
		ft_printf("|\nv\n");
		current = current->next;
	}
}
