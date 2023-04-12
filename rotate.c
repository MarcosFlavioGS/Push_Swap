#include "push_swap.h"

static void	ra(t_node **head)
{
	t_node	*curr;

	if (!head || !(*head) || !(*head)->next)
		return ;
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = *head;
	*head = (*head)->next;
	curr->next->next = NULL;
	ft_printf("ra\n");
}

static void	rb(t_node **head)
{
	t_node	*curr;

	if (!head || !(*head) || !(*head)->next)
		return ;
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = *head;
	*head = (*head)->next;
	curr->next->next = NULL;
	ft_printf("rb\n");
}

void	rotate(t_node **stack, int n)
{
	void	(*func_array[])(t_node **) = {NULL, ra, rb};

	(*func_array[n])(&*stack);
}
