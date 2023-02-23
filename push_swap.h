/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mfghost69@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:13:26 by mflavio-          #+#    #+#             */
/*   Updated: 2023/02/23 00:25:14 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct node
{
	int			x;
	struct node	*next;
}	t_node;

void	ft_error(int error);
int		check_stack(char **stack);
t_node	*create_linked_list(char **stack);
int		check_if_already_sorted(t_node *head);
#endif
