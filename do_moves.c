/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:56:02 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/13 18:56:04 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate_both(t_node **a, t_node **b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		rrr(&*a, &*b);
	}
}

static void	rotate_both(t_node **a, t_node **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		rr(&*a, &*b);
	}
}

static void	rotate_a(t_node **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			rotate(&*a, 0);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			reverse_rotate(&*a, 0);
			(*cost)++;
		}
	}
}

static void	rotate_b(t_node **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			rotate(&*b, 1);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			reverse_rotate(&*b, 1);
			(*cost)++;
		}
	}
}

void	do_move(t_node **a, t_node **b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		rev_rotate_both(a, b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		rotate_both(a, b, &cost_a, &cost_b);
	rotate_a(a, &cost_a);
	rotate_b(b, &cost_b);
	push(a, b, 0);
}
