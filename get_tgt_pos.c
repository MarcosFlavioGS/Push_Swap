/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tgt_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:53:37 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/12 19:20:23 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	search_in_a(t_node **head_a, int index_b, int clos_idx, int poss)
{
	t_node	*tmp;

	tmp = *head_a;
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
	tmp = *head_a;
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

void	get_tgt_pos(t_node **head_b, t_node **head_a)
{
	t_node	*tmp;
	int		position;

	tmp = *head_b;
	position = 0;
	while (tmp)
	{
		position = search_in_a(head_a, tmp->index, 2147483647, position);
		tmp->target_pos = position;
		tmp = tmp->next;
	}
}
