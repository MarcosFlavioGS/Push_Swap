/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mfghost69@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:07:43 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/25 00:11:14 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_3(t_node *head)
{
	if (head->index == 1)
		ft_printf("rra\nsa\n");
	else if (head->index == 2)
	{
		if (head->next->index == 1)
			ft_printf("sa\n");
		else
			ft_printf("rra\n");
	}
	else if (head->index == 3)
	{
		if (head->next->index == 1)
			ft_printf("ra\n");
		else
			ft_printf("ra\nsa\n");
	}
	return (0);
}
