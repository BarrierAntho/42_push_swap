/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cost_optimisation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:24:02 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:26:21 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_cost_optimisation(t_stack *obj)
{
	if (!obj)
		return ;
	if (obj->ra > obj->rb)
		obj->rr = obj->rb;
	else if (obj->ra < obj->rb)
		obj->rr = obj->ra;
	else
		obj->rr = obj->ra;
	obj->ra = obj->ra - obj->rr;
	obj->rb = obj->rb - obj->rr;
	if (obj->rra > obj->rrb)
		obj->rrr = obj->rrb;
	else if (obj->rra < obj->rrb)
		obj->rrr = obj->rra;
	else
		obj->rrr = obj->rra;
	obj->rra = obj->rra - obj->rrr;
	obj->rrb = obj->rrb - obj->rrr;
}
