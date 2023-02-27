/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:16:31 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/27 18:16:33 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node *head)
{
	int		temp;

	temp = head->x;
	head->x = head->next->x;
	head->next->x = temp;
	ft_printf("sa\n");
	print_linkdlst(head);
}
