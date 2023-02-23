/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:23:14 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/23 18:23:16 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_linked_list(char **stack)
{
	t_node	*head;
	t_node	*temp;
	t_node	*previous;
	int		i;

	i = 1;
	head = (t_node *)malloc(sizeof(t_node));
	head->x = ft_atoi(stack[i++]);
	head->next = NULL;
	previous = head;
	while (stack[i])
	{
		temp = (t_node *)malloc(sizeof(t_node));
		temp->x = ft_atoi(stack[i]);
		temp->next = NULL;
		previous->next = temp;
		previous = temp;
		i++;
	}
	return (head);
}
