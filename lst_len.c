/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:49:38 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/23 20:49:42 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_len(t_node *head)
{
	t_node	*current;
	int		counter;

	current = head;
	counter = 0;
	while (current)
	{
		counter += 1;
		current = current->next;
	}
	return (counter);
}
