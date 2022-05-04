/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cost_reset_obj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 09:55:31 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:25:31 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_cost_reset_obj(t_stack *obj)
{
	if (!obj)
		return ;
	obj->cost = 0;
	obj->ra = 0;
	obj->rb = 0;
	obj->rr = 0;
	obj->rra = 0;
	obj->rrb = 0;
	obj->rrr = 0;
}
