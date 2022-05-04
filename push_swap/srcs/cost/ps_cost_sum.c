/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cost_sum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:25:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:25:48 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_cost_sum(t_stack *obj)
{
	obj->cost += obj->ra;
	obj->cost += obj->rb;
	obj->cost += obj->rr;
	obj->cost += obj->rra;
	obj->cost += obj->rrb;
	obj->cost += obj->rrr;
}
