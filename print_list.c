/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:24:22 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/27 20:24:23 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_linkdlst(t_node *head)
{
	t_node	*current;

	current = head;
	while (current)
	{
		ft_printf("Value: %d\n", current->x);
		ft_printf("Index: %d\n", current->index);
		ft_printf("Pos: %d\n", current->pos);
		ft_printf("|\nv\n");
		current = current->next;
	}
}
