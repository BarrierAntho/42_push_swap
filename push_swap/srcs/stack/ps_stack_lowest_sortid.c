/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_lowest_sortid.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:12:27 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/13 19:21:43 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_lowest_sortid(t_stack **stack)
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
		if (obj != lowest && obj->sortid < lowest->sortid)
			lowest = obj;
		obj = obj->next;
	}
	return (lowest);
}
