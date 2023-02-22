/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:42:59 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/22 16:43:01 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *message)
{
	ft_printf("%s", message);
	exit (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_error("Too few arguments\n");
	ft_printf("Test: %s\n", argv[1]);
	return (0);
}
