/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:48:36 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 16:53:42 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_sort_five(t_stack **stack1, t_stack **stack2)
{
	t_stack	*obj;

	ps_pb(stack1, stack2);
	ps_stack_init_sortid(stack1);
	ps_stack_set_sortid(stack1);
	if (ps_check_sort(stack1) == 0)
		ps_sort_four(stack1, stack2);
	obj = *stack2;
	if (obj->sortid == 0)
		return (ps_pa(stack2, stack1));
	else if (obj->sortid == 1)
		return (ps_pa(stack2, stack1) + ps_sa(stack1));
	else if (obj->sortid == 2)
		return (ps_ra(stack1) + ps_pa(stack2, stack1)
			+ ps_sa(stack1) + ps_rra(stack1));
	else if (obj->sortid == 3)
		return (ps_rra(stack1) + ps_pa(stack2, stack1)
			+ ps_ra(stack1) + ps_ra(stack1));
	else
		return (ps_pa(stack2, stack1) + ps_ra(stack1));
	return (0);
}
