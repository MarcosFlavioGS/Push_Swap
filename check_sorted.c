/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:29:23 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/23 20:29:25 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_already_sorted(t_node *head)
{
	t_node	*current;

	current = head;
	while (current->next)
	{
		if (current->x > current->next->x)
			return (0);
		current = current->next;
	}
	return (1);
}
