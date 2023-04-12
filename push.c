/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:48:56 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/12 18:48:59 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pa(t_node **head_a, t_node **head_b)
{
	t_node	*curr;

	curr = NULL;
	if (*head_b == NULL)
		return ;
	curr = *head_b;
	*head_b = (*head_b)->next;
	curr->next = *head_a;
	*head_a = curr;
	ft_printf("pa\n");
}

static void	pb(t_node **head_a, t_node **head_b)
{
	t_node	*curr;

	curr = NULL;
	if (*head_a == NULL)
		return ;
	curr = *head_a;
	*head_a = (*head_a)->next;
	curr->next = *head_b;
	*head_b = curr;
	ft_printf("pb\n");
}

void	push(t_node **stack_a, t_node **stack_b, int n)
{
	void	(*func_array[2])(t_node **, t_node **);

	func_array[0] = pa;
	func_array[1] = pb;
	(*func_array[n])(&*stack_a, &*stack_b);
}
