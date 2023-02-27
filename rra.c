/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:24:38 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/27 20:24:39 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node *head)
{
	t_node	*curr;
	int		temp;

	reverse_list(&head);
	curr = head;
	while (curr && curr->next)
	{
		temp = curr->x;
		curr->x = curr->next->x;
		curr->next->x = temp;
		curr = curr->next;
	}
	reverse_list(&head);
	ft_printf("rra\n");
}
