/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_highest_sortid.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:12:27 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/13 19:21:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_highest_sortid(t_stack **stack)
{
	t_stack	*obj;
	t_stack	*highest;

	if (!stack)
		return (NULL);
	obj = *stack;
	if (!obj)
		return (NULL);
	highest = obj;
	while (obj)
	{
		if (obj != highest && obj->sortid > highest->sortid)
			highest = obj;
		obj = obj->next;
	}
	return (highest);
}
