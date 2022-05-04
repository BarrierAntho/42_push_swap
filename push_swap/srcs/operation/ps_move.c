/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:49:23 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:11:33 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_move(t_stack **stack1, t_stack **stack2, t_stack *obj)
{
	ps_move_stack_a(stack1, obj);
	ps_move_stack_b(stack2, obj);
	while (obj->rr > 0)
	{
		ps_rr(stack1, stack2);
		obj->rr--;
	}
	while (obj->rrr > 0)
	{
		ps_rrr(stack1, stack2);
		obj->rrr--;
	}
	ps_pb(stack1, stack2);
}
