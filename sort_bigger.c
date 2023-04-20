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

static void	find_current_position(t_node *a, t_node *b)
{
	get_position(a);
	get_position(b);
}

static void	pb_all_to_b(t_node **stack_a, t_node **stack_b)
{
	int		len;
	int		i;

	len = lst_len(*stack_a);
	i = 0;
	while (*stack_a && i < len)
	{
		if ((*stack_a)->index < len / 2)
			push(&*stack_a, &*stack_b, 1);
		else
			rotate(&*stack_a, 0);
		i++;
	}
	while (lst_len(*stack_a) > 3)
		push(&*stack_a, &*stack_b, 1);
}

static void	shift_stack(t_node **stack_a)
{
	int	lowest_pos;
	int	stack_size;

	stack_size = lst_len(*stack_a);
	lowest_pos = get_lowest_index_position(&*stack_a);
	if (lowest_pos > stack_size / 2)
	{
		while (lowest_pos < stack_size)
		{
			reverse_rotate(&*stack_a, 0);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			rotate(&*stack_a, 0);
			lowest_pos--;
		}
	}
}

void	sort_bigger(t_node **stack_a, int *len)
{
	t_node	*stack_b;

	stack_b = NULL;
	if (*len > 5)
		radix(&*stack_a, &stack_b);
	else
	{
		pb_all_to_b(&*stack_a, &stack_b);
		sort_3(&*stack_a);
		get_position(*stack_a);
		get_position(stack_b);
		while (stack_b)
		{
			find_current_position(*stack_a, stack_b);
			get_tgt_pos(&stack_b, &*stack_a);
			calculate_move_cost(&*stack_a, &stack_b);
			exec_cheapest_move(&*stack_a, &stack_b);
		}
		if (!check_if_already_sorted(*stack_a))
			shift_stack(stack_a);
	}
	clear_stack(&stack_b);
}
