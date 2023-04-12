#include "push_swap.h"

static void	rra(t_node **head)
{
	t_node	*curr;
	t_node	*last;

	curr = *head;
	while (curr->next->next)
		curr = curr->next;
	last = curr->next;
	curr->next = NULL;
	last->next = *head;
	*head = last;
	ft_printf("rra\n");
}

static void	rrb(t_node **head)
{
	t_node	*curr;
	t_node	*last;

	curr = *head;
	while (curr->next->next)
		curr = curr->next;
	last = curr->next;
	curr->next = NULL;
	last->next = *head;
	*head = last;
	ft_printf("rrb\n");
}

void	reverse_rotate(t_node **stack, int n)
{
	void	(*func_array[])(t_node **) = {NULL, rra, rrb};

	(*func_array[n])(&*stack);
}
