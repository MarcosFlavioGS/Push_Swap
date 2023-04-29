/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bigger.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:18:36 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/20 17:39:55 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2(t_node **stack)
{
	if ((*stack)->x > (*stack)->next->x)
		rotate(stack, 0);
}

static void	sort_4_5(t_node **stack_a, t_node **stack_b)
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
		sort_3(&*stack_a);
	ft_printf("Test2\n");
	if ((*stack_b)->index < (*stack_b)->next->index)
		swap(&*stack_b, 1);
	while (*stack_b)
		push(&*stack_a, &*stack_b, 0);
}

void	sort_bigger(t_node **stack_a, int len)
{
	t_node	*stack_b;

	stack_b = NULL;
	if (len < 6)
		sort_4_5(&*stack_a, &stack_b);
	else
		radix(&*stack_a, &stack_b);
	clear_stack(&stack_b);
}
