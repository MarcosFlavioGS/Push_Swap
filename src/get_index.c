/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mfghost69@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:09:09 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/25 00:09:25 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_node *stack, int len)
{
	t_node	*curr;
	t_node	*curr2;
	int		counter;

	curr = stack;
	while (curr)
	{
		counter = 0;
		curr2 = stack;
		while (curr2)
		{
			if (curr2->x > curr->x)
				counter += 1;
			curr2 = curr2->next;
		}
		curr->index = (len - counter);
		curr = curr->next;
	}
}
