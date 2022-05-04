/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_loop_sortid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:09:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/13 14:55:13 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_loop_sortid(t_stack **stack)
{
	t_stack	*obj;
	t_stack	*last;
	t_stack	*lowest;

	if (!stack)
		return (ft_error("check_loop_sortid", "stack", 0, ERR_NOSTACK));
	if (ps_stack_size(stack) <= 2)
		return (1);
	lowest = ps_stack_lowest_sortid(stack);
	last = ps_stack_last(stack);
	last->next = *stack;
	obj = lowest->next;
	while (obj != lowest)
	{
		if (obj->next != lowest && obj->sortid > obj->next->sortid)
		{
			last->next = NULL;
			return (0);
		}
		obj = obj->next;
	}
	last->next = NULL;
	return (1);
}
