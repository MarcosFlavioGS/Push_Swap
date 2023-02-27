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

static void	print_linkdlst(t_node *head)
{
	t_node	*current;

	current = head;
	while (current)
	{
		ft_printf("Value: %d\n", current->x);
		ft_printf("Index: %d\n", current->index);
		ft_printf("Pos: %d\n", current->pos);
		ft_printf("|\nv\n");
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	int		error;
	int		list_len;
	t_node	*head_a;

	if (argc < 2)
		return (0);
	error = check_stack(argv);
	if (error != 0)
		ft_error(error);
	head_a = create_linked_list(argv);
	if (check_if_already_sorted(head_a))
		return (0);
	list_len = lst_len(head_a);
	if (list_len == 2)
		ft_printf("sa\n");
	get_index(head_a, list_len);
	if (list_len == 3)
		return (sort_3(head_a));
	print_linkdlst(head_a);
	return (0);
}
