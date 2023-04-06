#include "push_swap.h"

void	get_tgt_pos(t_node *head_b, t_node *head_a)
{
  t_node	*curr;
  t_node	*curr_a;
  int		bigger;
  int		tgt;
  
  biger = 0;
  tgt = 0;
  curr = head_b;
  curr_a = head_a;
  while (curr)
  {
    while (curr_a)
    {
      if (curr_a->index > curr->index)
      {
	if (curr_a->pos == 0)
	  bigger = curr_a->index;
	if (curr_a->index < bigger)
	{
	  bigger = curr_a->index;
	  tgt = curr_a->pos;
	}
      }
      curr_a = curr_a->next;
    }
    if (bigger == 0)
      pass
    curr->tgt_pos = tgt;
    curr = curr->next;
    curr_a = head_a;
  }
}
