/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:02:05 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/22 17:02:07 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Todo: Make Enumerable for every error possible
void	ft_error(int error)
{
	if (error == 1)
		ft_printf("Error: Some argument is not a digit.\n");
	else if (error == 2)
		ft_printf("Error: Duplicates present.\n");
	else if (error == 4)
		ft_printf("Error: Value exceeds limit of an int.\n");
	else if (error == 3)
	{
		ft_printf("Error: Some argument is not a digit.\n");
		ft_printf("Error: Duplicates present.\n");
	}
	else if (error == 5)
	{
		ft_printf("Error: Some argument is not a digit.\n");
		ft_printf("Error: Value exceeds limit of an int.\n");
	}
	else if (error == 6)
	{
		ft_printf("Error: Duplicates present.\n");
		ft_printf("Error: Value exceeds limit of an int.\n");
	}
	else if (error == 7)
	{
		ft_printf("Error: Some argument is not a digit.\n");
		ft_printf("Error: Duplicates present.\n");
		ft_printf("Error: Value exceeds limit of an int.\n");
	}
	exit (1);
}

