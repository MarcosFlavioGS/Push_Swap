/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bigger.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:18:36 by mflavio-          #+#    #+#             */
/*   Updated: 2023/03/28 17:30:11 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_current_position(t_node *a, t_node *b)
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
		{
			pb(&*head_a, &*head_b);
			ft_printf("pb\n");
		}
		else
		{
			ra(&*head_a);
			ft_printf("ra\n");
		}
		i++;
	}
	while (lst_len(*head_a) > 3)
	{
		pb(&*head_a, &*head_b);
		ft_printf("pb\n");
	}
}

void	sort_bigger(t_node **head_a)
{
	t_node	*head_b;

	head_b = NULL;
	pb_all_to_b(&*head_a, &head_b);
	sort_3(&*head_a);
	get_position(*head_a);
	get_position(head_b);
	print_linkdlst(head_b);
	print_linkdlst(*head_a);
	/*
	while (head_b)
	{
		find_current_position(*head_a, head_b);
		get_tgt_pos(head_b, *head_a);
	}
	*/
	clear_stack(&head_b);
}
