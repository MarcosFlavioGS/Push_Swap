#include "push_swap.h"

static void	sa(t_node **head)
{
	t_node	*curr;
	t_node	*sec;

	if (!head || !(*head) || !(*head)->next)
		return ;
	curr = *head;
	sec = (*head)->next;
	curr->next = sec->next;
	sec->next = curr;
	*head = sec;
	ft_printf("sa\n");
}

static void	sb(t_node **head)
{
	t_node	*curr;
	t_node	*sec;

	if (!head || !(*head) || !(*head)->next)
		return ;
	curr = *head;
	sec = (*head)->next;
	curr->next = sec->next;
	sec->next = curr;
	*head = sec;
	ft_printf("sb\n");
}

void	swap(t_node **stack, int n)
{
	void	(*func_array[])(t_node **) = {NULL, sa, sb};

	(*func_array[n])(&*stack);
}