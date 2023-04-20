/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:49:01 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/20 17:55:04 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sa(t_node **stack)
{
	t_node	*curr;
	t_node	*sec;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	curr = *stack;
	sec = (*stack)->next;
	curr->next = sec->next;
	sec->next = curr;
	*stack = sec;
	ft_printf("sa\n");
}

static void	sb(t_node **stack)
{
	t_node	*curr;
	t_node	*sec;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	curr = *stack;
	sec = (*stack)->next;
	curr->next = sec->next;
	sec->next = curr;
	*stack = sec;
	ft_printf("sb\n");
}

void	swap(t_node **stack, int n)
{
	void	(*func_array[2])(t_node **);

	func_array[0] = sa;
	func_array[1] = sb;
	(*func_array[n])(&*stack);
}
