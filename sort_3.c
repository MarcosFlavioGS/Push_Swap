/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:07:43 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/27 20:28:04 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **head)
{
	int	index1;
	int	index2;
	int	index3;

	index1 = (*head)->index;
	index2 = (*head)->next->index;
	index3 = (*head)->next->next->index;
	if (index1 > index2 && index1 > index3)
		ra(&*head);
	if (index2 > index1 && index2 > index3)
		rra(&*head);
	index1 = (*head)->index;
	index2 = (*head)->next->index;
	index3 = (*head)->next->next->index;
	if (index1 > index2)
		sa(&*head);
}
