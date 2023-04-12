/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mflavio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:13:26 by mflavio-          #+#    #+#             */
/*   Updated: 2023/03/28 17:57:50 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_node
{
	int				x;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_node	*next;
}	t_node;

void	ft_error(int error);
int		check_stack(char **stack);
t_node	*create_linked_list(char **stack);
int		check_if_already_sorted(t_node *head);
int		lst_len(t_node *head);
void	get_index(t_node *head, int len);
void	sort_3(t_node **head);
void	print_linkdlst(t_node *head);
void	reverse_list(t_node **head);
void	sort_bigger(t_node **head_a);
void	get_position(t_node *head);
void	get_tgt_pos(t_node *head_b, t_node *head_a);
void	clear_stack(t_node **stack);
// actions
void	push(t_node **stack_a, t_node **stack_b, int n);
void	swap(t_node **stack, int n);
void	rotate(t_node **stack, int n);
void	reverse_rotate(t_node **stack, int n);
#endif
