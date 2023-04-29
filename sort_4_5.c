#include "push_swap.h"

void	sort_2(t_node **stack)
{
	if ((*stack)->x > (*stack)->next->x)
		rotate(stack, 0);
}

void	sort_three(t_node **stack)
{
	if ((*stack)->x > (*stack)->next->x)
		swap(&*stack, 0);
	if ((*stack)->next->x > (*stack)->next->next->x)
		reverse_rotate(stack, 0);
	if ((*stack)->x > (*stack)->next->x)
		swap(&*stack, 0);
}

void	sort_4_5(t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	size;

	if (check_if_already_sorted(*stack_a))
		return ;
	i = 0;
	size = lst_len(*stack_a);
	while (i < size)
	{
		if ((*stack_a)->index <= 1)
			push(&*stack_a, &*stack_b, 1);
		else
			rotate(&*stack_a, 0);
		i++;
	}
	ft_printf("test\n");
	if (size == 4)
		sort_2(&*stack_a);
	else
		sort_three(&*stack_a);
	if ((*stack_b)->index < (*stack_b)->next->index)
		swap(&*stack_b, 1);
	while (*stack_b)
		push(&*stack_a, &*stack_b, 0);
}
