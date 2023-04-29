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

void	sort_bigger(t_node **stack_a, int *len)
{
	t_node	*stack_b;

	stack_b = NULL;
	if (*len < 6)
		sort_4_5(&*stack_a, &stack_b);
	else
		radix(&*stack_a, &stack_b);
	clear_stack(&stack_b);
}
