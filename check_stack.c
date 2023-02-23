/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:30:52 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/23 16:57:58 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_count(int num, char **stack)
{
    int i;
    int count;

    i = 1;
    count = 0;
    while (stack[i])
    {
        if (ft_atoi(stack[i]) == num)
            count++;
        i++;
    }
    return (count);
}

int check_stack(char **stack)
{
    int i;
    int j;
	int	error1;
	int	error2;

	error1 = 0;
	error2 = 0;
    i = 1;
    while (stack[i])
    {
        j = 0;
        while (stack[i][j])
        {
            if (ft_isdigit(stack[i][j]) == 0)
                error1 = 1;
            j++;
        }
		if (num_count(ft_atoi(stack[i]), stack) > 1)
			error2 = 2;
		if (error1 && error2)
			return (error1 + error2);
        i++;
    }
    return (error1 + error2);
}
