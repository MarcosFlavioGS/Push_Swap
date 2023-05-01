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

int	main(int argc, char **argv)
{
	int		error;
	int		list_len;
	t_node	*stack_a;

	if (argc < 2)
		return (0);
	error = check_stack(argv);
	if (error != 0)
		ft_error(error);
	stack_a = create_linked_list(argv);
	if (check_if_already_sorted(stack_a))
		return (0);
	list_len = lst_len(stack_a);
	if (list_len == 2)
		ft_printf("sa\n");
	get_index(stack_a, list_len);
	if (list_len == 3)
		sort_3(&stack_a);
	if (list_len > 3)
		sort_bigger(&stack_a, list_len);
	clear_stack(&stack_a);
	return (0);
}
