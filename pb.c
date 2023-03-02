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

void	pb(t_node **head_a, t_node **head_b)
{
	t_node	*curr;

	curr = NULL;
	if (*head_a == NULL)
		return ;
	curr = *head_a;
	*head_a = (*head_a)->next;
	curr->next = *head_b;
	*head_b = curr;
}
