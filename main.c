/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:42:59 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/22 20:3 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(char **stack)
{
	int	i;

	i = 1;
	while (stack[i])
	{
		ft_printf("%s\n", stack[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		error;
	//t_node	*head_A;

	if (argc < 2)
		return (0);
	error = check_stack(argv);
	if (error != 0)
		ft_error(error);
	print_stack(argv);
	//head_A = create_linked_list(argv);
	return (0);
}
