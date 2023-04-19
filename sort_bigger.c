/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bigger.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:18:36 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/12 20:18:14 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_current_position(t_node *a, t_node *b)
{
	get_position(a);
	get_position(b);
}

static void	pb_all_to_b(t_node **head_a, t_node **head_b)
{
	int		len;
	int		i;

	len = lst_len(*head_a);
	i = 0;
	while (*head_a && i < len)
	{
		if ((*head_a)->index < len / 2)
			push(&*head_a, &*head_b, 1);
		else
			rotate(&*head_a, 0);
		i++;
	}
	while (lst_len(*head_a) > 3)
		push(&*head_a, &*head_b, 1);
}

static void	shift_stack(t_node **head_a)
{
	int	lowest_pos;
	int	stack_size;

	stack_size = lst_len(*head_a);
	lowest_pos = get_lowest_index_position(&*head_a);
	if (lowest_pos > stack_size / 2)
	{
		while (lowest_pos < stack_size)
		{
			reverse_rotate(&*head_a, 0);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			rotate(&*head_a, 0);
			lowest_pos--;
		}
	}
}

void	sort_bigger(t_node **head_a, int *len)
{
	t_node	*head_b;

	head_b = NULL;
	if (*len > 5)
		radix(&*head_a, &head_b);
	else
	{
		pb_all_to_b(&*head_a, &head_b);
		sort_3(&*head_a);
		get_position(*head_a);
		get_position(head_b);
		while (head_b)
		{
			find_current_position(*head_a, head_b);
			get_tgt_pos(&head_b, &*head_a);
			calculate_move_cost(&*head_a, &head_b);
			exec_cheapest_move(&*head_a, &head_b);
		}
		if (!check_if_already_sorted(*head_a))
			shift_stack(head_a);
	}
	clear_stack(&head_b);
}
