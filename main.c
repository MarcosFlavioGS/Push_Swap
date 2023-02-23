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

void	print_linkdlst(t_node *head)
{
	t_node	*current;

	current = head;
	while (current)
	{
		ft_printf("%d\n|\nv\n", current->x);
		current = current->next;
	}
}

int	lst_len(t_node *head)
{
	t_node	*current;
	int		counter;

	current = head;
	counter = 0;
	while (current)
	{
		counter += 1;
		current = current->next;
	}
	return (counter);
}

int	main(int argc, char **argv)
{
	int		error;
	t_node	*head_a;

	if (argc < 2)
		return (0);
	error = check_stack(argv);
	if (error != 0)
		ft_error(error);
	head_a = create_linked_list(argv);
	if (check_if_already_sorted(head_a))
		return (0);
	if (lst_len(head_a) == 2)
		ft_printf("sa\n");
	print_linkdlst(head_a);
	return (0);
}
