/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_move_b_to_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:48:11 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:38:28 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_move_b_to_a(t_stack **stack1, t_stack **stack2)
{
	t_stack	*obj;
	int		cost;

	obj = ps_stack_highest_sortid(stack2);
	cost = ps_check_cost_direction(stack2, obj);
	if (cost > 0)
	{
		while (cost > 0)
		{
			ps_rb(stack2);
			cost--;
		}
	}
	else
	{
		cost = (-1) * cost;
		while (cost > 0)
		{
			ps_rrb(stack2);
			cost--;
		}
	}
	while (*stack2)
		ps_pa(stack2, stack1);
}
