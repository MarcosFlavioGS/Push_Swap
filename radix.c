/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:00:00 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/19 19:00:10 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bit(t_node *stack)
{
	int	max_index;
	int	max_bit;

	max_index = stack->index;
	stack = stack->next;
	while (stack)
	{
		if (stack->index > max_index)
			max_index = stack->index;
		stack = stack->next;
	}
	max_bit = 0;
	while ((max_index | 0) != 0)
	{
		max_bit++;
		max_index = max_index >> 1;
	}
	return (max_bit);
}

static void	sort_radix(t_node **stack_a, t_node **stack_b, int i)
{
	int	size;

	size = lst_len(*stack_a);
	while (size > 0)
	{
		if (((*stack_a)->index >> i & 1) == 0)
			push(&*stack_a, &*stack_b, 1);
		else
			rotate(&*stack_a, 0);
		size--;
	}
	while (*stack_b)
		push(&*stack_a, &*stack_b, 0);
}

void	radix(t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	max_bit;

	i = 0;
	max_bit = get_max_bit(*stack_a);
	while (i < max_bit && !check_if_already_sorted(*stack_a))
	{
		sort_radix(&*stack_a, &*stack_b, i);
		i++;
	}
}
