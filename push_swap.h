/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:13:26 by mflavio-          #+#    #+#             */
/*   Updated: 2023/04/20 17:50:35 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_node
{
	int				x;
	int				index;
	struct s_node	*next;
}	t_node;

void	ft_error(int error);
int		check_stack(char **stack);
t_node	*create_linked_list(char **stack);
int		check_if_already_sorted(t_node *stack);
int		lst_len(t_node *stack);
void	get_index(t_node *stack, int len);
void	sort_3(t_node **stack);
void	sort_bigger(t_node **stack_a, int len);
void	clear_stack(t_node **stack);
void	radix(t_node **stack_a, t_node **stack_b);
// actions
void	push(t_node **stack_a, t_node **stack_b, int n);
void	swap(t_node **stack, int n);
void	rotate(t_node **stack, int n);
void	rr(t_node **stack_a, t_node **stack_b);
void	reverse_rotate(t_node **stack, int n);
void	rrr(t_node **stack_a, t_node **stack_b);
#endif
