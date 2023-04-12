#include "push_swap.h"

static void	pa(t_node **head_a, t_node **head_b)
{
	t_node	*curr;

	curr = NULL;
	if (*head_b == NULL)
		return ;
	curr = *head_b;
	*head_b = (*head_b)->next;
	curr->next = *head_a;
	*head_a = curr;
	ft_printf("pa\n");
}

static void	pb(t_node **head_a, t_node **head_b)
{
	t_node	*curr;

	curr = NULL;
	if (*head_a == NULL)
		return ;
	curr = *head_a;
	*head_a = (*head_a)->next;
	curr->next = *head_b;
	*head_b = curr;
	ft_printf("pb\n");
}

void	push(t_node **stack_a, t_node **stack_b, int n)
{
	void	(*func_array[])(t_node **, t_node **) = {NULL, pa, pb};

	(*func_array[n])(&*stack_a, &*stack_b);
}
