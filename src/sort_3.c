/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:07:43 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/12 16:35:11 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **stack)
{
	int	index1;
	int	index2;
	int	index3;

	index1 = (*stack)->index;
	index2 = (*stack)->next->index;
	index3 = (*stack)->next->next->index;
	if (index1 > index2 && index1 > index3)
		rotate(&*stack, 0);
	if (index2 > index1 && index2 > index3)
		reverse_rotate(&*stack, 0);
	index1 = (*stack)->index;
	index2 = (*stack)->next->index;
	index3 = (*stack)->next->next->index;
	if (index1 > index2)
		swap(&*stack, 0);
}
