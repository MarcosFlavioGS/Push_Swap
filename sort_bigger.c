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

void	pb_all_to_b(t_node **head_a, t_node **head_b)
{
	t_node	*curr;

	curr = *head_a;
	*head_a = (*head_a)->next->next->next;
	curr->next->next->next = NULL;
	while (*head_a)
		pb(&*head_a, &*head_b);
	*head_a = curr;
}

void	sort_bigger(t_node **head_a)
{
	t_node	*head_b;

	head_b = NULL;
	pb_all_to_b(&*head_a, &head_b);
	sort_3(&*head_a);
	print_linkdlst(head_b);
	print_linkdlst(*head_a);
}
