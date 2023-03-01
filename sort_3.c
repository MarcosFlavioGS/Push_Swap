/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:07:43 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/27 20:28:04 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_3(t_node *head)
{
	if (head->index == 1)
	{
		rra(&head);
		sa(&head);
	}
	else if (head->index == 2)
	{
		if (head->next->index == 1)
			sa(&head);
		else
			rra(&head);
	}
	else if (head->index == 3)
	{
		if (head->next->index == 1)
			ra(&head);
		else
		{
			ra(&head);
			sa(&head);
		}
	}
	print_linkdlst(head);
	return (0);
}
