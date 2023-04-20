/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:39:20 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/20 17:51:06 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculate_move_cost(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;
	int		size_a;
	int		size_b;

	size_a = lst_len(*stack_a);
	size_b = lst_len(*stack_b);
	tmp = *stack_b;
	while (tmp)
	{
		tmp->cost_b = tmp->pos;
		if (tmp->pos > size_b / 2)
			tmp->cost_b = (size_b - tmp->pos) * -1;
		tmp->cost_a = tmp->target_pos;
		if (tmp->target_pos > size_a / 2)
			tmp->cost_a = (size_a - tmp->target_pos) * -1;
		tmp = tmp->next;
	}
}

void	exec_cheapest_move(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;
	int		cheapest;
	int		cost_a;
	int		cost_b;

	tmp = *stack_b;
	cheapest = 2147483647;
	while (tmp)
	{
		if (num_abs(tmp->cost_a) + num_abs(tmp->cost_b) < num_abs(cheapest))
		{
			cheapest = num_abs(tmp->cost_b) + num_abs(tmp->cost_a);
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
		}
		tmp = tmp->next;
	}
	do_move(stack_a, stack_b, cost_a, cost_b);
}
