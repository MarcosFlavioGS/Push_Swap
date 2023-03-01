/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bigger.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:18:36 by mflavio-          #+#    #+#             */
/*   Updated: 2023/03/01 17:18:38 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node **head_b, t_node *new)
{
	if (!(*new))
		return;
	if (!(*head_b))
		*head_b = (t_node *) malloc(sizeof(t_node));
	new->next = *head_b;
	*head_b = new;
}

void	pb_all_to_b(t_node **head_a, t_node *head_b)
{
	t_node	*curr;

	curr = head_a;
	while (a)
	{
		pb(&head_b, *head_a);
		curr = curr->next;
	}
}

void	sort_bigger(t_node **head_a)
{
	t_node	*head_b;

	head_b = NULL;
	pb_all_to_b(&*head_a, head_b);
}
