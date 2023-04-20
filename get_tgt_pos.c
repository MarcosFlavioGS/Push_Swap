/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tgt_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:53:37 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/20 17:48:52 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	search_in_a(t_node **stack_a, int index_b, int clos_idx, int poss)
{
	t_node	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index > index_b && tmp->index < clos_idx)
		{
			clos_idx = tmp->index;
			poss = tmp->pos;
		}
		tmp = tmp->next;
	}
	if (clos_idx != 2147483647)
		return (poss);
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index < clos_idx)
		{
			clos_idx = tmp->index;
			poss = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (poss);
}

void	get_tgt_pos(t_node **stack_b, t_node **stack_a)
{
	t_node	*tmp;
	int		position;

	tmp = *stack_b;
	position = 0;
	while (tmp)
	{
		position = search_in_a(stack_a, tmp->index, 2147483647, position);
		tmp->target_pos = position;
		tmp = tmp->next;
	}
}
