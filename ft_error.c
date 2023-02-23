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
	ft_printf("Error: %d", error);
	exit (1);
}

