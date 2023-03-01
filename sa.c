/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:16:31 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/27 20:27:33 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **head)
{
	t_node	*curr;
	t_node	*sec;

	if (!head || !(*head) || !(*head)->next)
		return ;
	curr = *head;
	sec = (*head)->next;
	curr->next = sec->next;
	sec->next = curr;
	*head = sec;
	ft_printf("sa\n");
}
