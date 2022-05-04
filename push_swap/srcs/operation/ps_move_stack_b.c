/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_move_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:48:41 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 16:48:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_move_stack_b(t_stack **stack, t_stack *obj)
{
	while (obj->rb > 0)
	{
		ps_rb(stack);
		obj->rb--;
	}
	while (obj->rrb > 0)
	{
		ps_rrb(stack);
		obj->rrb--;
	}
}
