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

t_node	*create_linked_list(char **stack)
{
	t_node	*head;
	t_node	*current;
	t_node	*previous;
	int		i;

	i = 1;
	head = (t_node *)malloc(sizeof(t_node));
	head->x = ft_atoi(stack[i++]);
	head->next = NULL;
	previous = head;
	while (stack[i])
	{
		current = (t_node *)malloc(sizeof(t_node));
		current->x = ft_atoi(stack[i]);
		current->next = NULL;
		previous->next = current;
		previous = current;
		i++;
	}
	return (head);
}

void	print_linkdlst(t_node *head)
{
	t_node	*current;

	current = head;
	while (current)
	{
		ft_printf("%d\n", current->x);
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	int		error;
	t_node	*head_A;

	if (argc < 2)
		return (0);
	error = check_stack(argv);
	if (error != 0)
		ft_error(error);
	head_A = create_linked_list(argv);
	print_linkdlst(head_A);
	return (0);
}
