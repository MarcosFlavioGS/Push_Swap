/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:30:52 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/22 17:32:37 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_stack(char **stack)
{
    int i;
    int j;

    i = 1;
    while (stack[i])
    {
        j = 0;
        while (stack[i][j])
        {
            if (ft_isdigit(stack[i][j]) == 0)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}