/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_move_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:49:01 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 16:49:12 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_move_stack_a(t_stack **stack, t_stack *obj)
{
	while (obj->ra > 0)
	{
		ps_ra(stack);
		obj->ra--;
	}
	while (obj->rra > 0)
	{
		ps_rra(stack);
		obj->rra--;
	}
}
