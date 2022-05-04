/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cost_set_direction.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:25:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:25:09 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_cost_set_direction(char stack, t_stack *obj, int cost)
{
	if (cost == 0)
		return ;
	else if (cost > 0)
	{
		if (stack == 'a')
			obj->ra += cost;
		else if (stack == 'b')
			obj->rb += cost;
	}
	else
	{
		if (stack == 'a')
			obj->rra += (-1) * cost;
		else if (stack == 'b')
			obj->rrb += (-1) * cost;
	}
}
