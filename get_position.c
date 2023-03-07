/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:18:40 by mflavio-          #+#    #+#             */
/*   Updated: 2023/03/07 19:21:34 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    get_position(t_node *head)
{
    t_node  *curr;
    int     i;

    i = 0;
    curr = head;
    while (curr != NULL)
    {
        curr->pos = i;
        curr = curr->next;
        i++;
    }
}