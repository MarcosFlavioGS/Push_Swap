/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:31:04 by mflavio-          #+#    #+#             */
/*   Updated: 2023/03/02 18:31:06 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **head_a, t_node **head_b)
{
	t_node	*curr;

	curr = NULL;
	if (*head_b == NULL)
		return ;
	curr = *head_b;
	*head_b = (*head_b)->next;
	curr->next = *head_a;
	*head_a = curr;
}
