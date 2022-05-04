/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_lowest_cost.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:27:49 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:27:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_lowest_cost(t_stack **stack)
{
	t_stack	*obj;
	t_stack	*lowest;

	if (!stack)
		return (NULL);
	obj = *stack;
	if (!obj)
		return (NULL);
	lowest = obj;
	while (obj)
	{
		if (obj != lowest && obj->cost <= lowest->cost)
			lowest = obj;
		obj = obj->next;
	}
	return (lowest);
}
