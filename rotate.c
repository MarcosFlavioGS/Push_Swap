/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:49:04 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/12 18:49:06 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ra(t_node **head)
{
	t_node	*curr;

	if (!head || !(*head) || !(*head)->next)
		return ;
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = *head;
	*head = (*head)->next;
	curr->next->next = NULL;
}

static void	rb(t_node **head)
{
	t_node	*curr;

	if (!head || !(*head) || !(*head)->next)
		return ;
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = *head;
	*head = (*head)->next;
	curr->next->next = NULL;
}

void	rr(t_node **head_a, t_node **head_b)
{
	void	(*func_array[2])(t_node **);

	func_array[0] = ra;
	func_array[1] = rb;
	(*func_array[0])(&*head_a);
	(*func_array[1])(&*head_b);
	ft_printf("rr\n");
}

void	rotate(t_node **stack, int n)
{
	void	(*func_array[2])(t_node **);

	func_array[0] = ra;
	func_array[1] = rb;
	(*func_array[n])(&*stack);
	if (n == 0)
		ft_printf("ra\n");
	else if (n == 1)
		ft_printf("rb\n");
}
