#include "push_swap.h"

void	clear_stack(t_node **stack)
{
	t_node *tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
