/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:48:56 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/20 17:52:50 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*curr;

	curr = NULL;
	if (*stack_b == NULL)
		return ;
	curr = *stack_b;
	*stack_b = (*stack_b)->next;
	curr->next = *stack_a;
	*stack_a = curr;
	ft_printf("pa\n");
}

static void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*curr;

	curr = NULL;
	if (*stack_a == NULL)
		return ;
	curr = *stack_a;
	*stack_a = (*stack_a)->next;
	curr->next = *stack_b;
	*stack_b = curr;
	ft_printf("pb\n");
}

void	push(t_node **stack_a, t_node **stack_b, int n)
{
	void	(*func_array[2])(t_node **, t_node **);

	func_array[0] = pa;
	func_array[1] = pb;
	(*func_array[n])(&*stack_a, &*stack_b);
}
