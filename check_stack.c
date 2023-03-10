/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:30:52 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/24 17:39:01 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	num_count(int num, char **stack)
{
	int	i;
	int	count;

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

static int	bigger_than_int(long x)
{
	if (x > 2147483647 || x < -2147483648)
		return (1);
	return (0);
}

static long	long_ft_atoi(char *str)
{
	int			i;
	long long	num;
	int			sign;

	i = 0;
	num = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

static void	check_digit(int i, int *j, int *error, char **stack)
{
	while (stack[i][*j])
	{
		if (stack[i][*j] < '0' || stack[i][*j] > '9')
		{
			if (stack[i][*j] == '-' || stack[i][*j] == '+')
			{
				if (*j != 0)
					*error = 1;
			}
			else
				*error = 1;
		}
		(*j)++;
	}	
}

int	check_stack(char **stack)
{
	int	i;
	int	j;
	int	error1;
	int	error2;
	int	error3;

	error1 = 0;
	error2 = 0;
	error3 = 0;
	i = 1;
	while (stack[i])
	{
		j = 0;
		check_digit(i, &j, &error1, stack);
		if (bigger_than_int(long_ft_atoi(stack[i])))
			error3 = 4;
		if (num_count(ft_atoi(stack[i]), stack) > 1)
			error2 = 2;
		if (error1 && error2 && error3)
			return (error1 + error2 + error3);
		i++;
	}
	return (error1 + error2 + error3);
}
