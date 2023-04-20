/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mfghost69@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:09:09 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/25 00:09:25 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_node *stack, int len)
{
	t_node	*curr;
	t_node	*curr2;
	int		counter;

	curr = stack;
	while (curr)
	{
		counter = 0;
		curr2 = stack;
		while (curr2)
		{
			if (curr2->x > curr->x)
				counter += 1;
			curr2 = curr2->next;
		}
		curr->index = (len - counter);
		curr = curr->next;
	}
}

int	get_lowest_index_position(t_node **stack_a)
{
	t_node	*tmp;
	int		lowest_index;
	int		lowest_pos;

	tmp = *stack_a;
	lowest_index = 2147483647;
	get_position(*stack_a);
	lowest_pos = tmp->pos;
	while (tmp)
	{
		if (tmp->index < lowest_index)
		{
			lowest_index = tmp->index;
			lowest_pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (lowest_pos);
}
