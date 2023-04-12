/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:49:17 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/12 18:49:22 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rra(t_node **head)
{
	t_node	*curr;
	t_node	*last;

	curr = *head;
	while (curr->next->next)
		curr = curr->next;
	last = curr->next;
	curr->next = NULL;
	last->next = *head;
	*head = last;
	ft_printf("rra\n");
}

static void	rrb(t_node **head)
{
	t_node	*curr;
	t_node	*last;

	curr = *head;
	while (curr->next->next)
		curr = curr->next;
	last = curr->next;
	curr->next = NULL;
	last->next = *head;
	*head = last;
	ft_printf("rrb\n");
}

void	reverse_rotate(t_node **stack, int n)
{
	void	(*func_array[2])(t_node **);

	func_array[0] = rra;
	func_array[1] = rrb;
	(*func_array[n])(&*stack);
}
