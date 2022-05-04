/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cost_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:25:36 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:33:08 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_cost_set(t_stack **stack1, t_stack **stack2)
{
	t_stack	*obj;
	t_stack	*median;
	int		cost;

	obj = *stack1;
	median = NULL;
	cost = 0;
	while (obj)
	{
		cost = ps_check_cost_direction(stack1, obj);
		ps_cost_set_direction('a', obj, cost);
		median = ps_stack_median(stack2, obj);
		cost = 0;
		cost = ps_check_cost_direction(stack2, median);
		ps_cost_set_direction('b', obj, cost);
		ps_cost_optimisation(obj);
		ps_cost_sum(obj);
		obj = obj->next;
		cost = 0;
	}
}
