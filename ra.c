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

void	ra(t_node *head)
{
	t_node	*curr;
	int		temp;

	curr = head;
	while (curr && curr->next)
	{
		temp = curr->x;
		curr->x = curr->next->x;
		curr->next->x = temp;
		curr = curr->next;
	}
	ft_printf("ra\n");
}
