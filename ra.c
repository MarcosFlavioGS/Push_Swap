/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:24:29 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/27 20:27:35 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **head)
{
	t_node	*curr;

	if (!head || !(*head) || !(*head)->next)
		return ;
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = *head;
	*head = (*head)->next;
	curr->next->next = NULL;
	ft_printf("ra\n");
}
