/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_loop_sortid_reverse.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:09:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/13 15:14:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_loop_sortid_reverse(t_stack **stack)
{
	t_stack	*obj;
	t_stack	*first;
	t_stack	*lowest;

	if (!stack)
		return (ft_error("check_loop_sortid_reverse",
				"stack", 0, ERR_NOSTACK));
	if (ps_stack_size(stack) <= 2)
		return (1);
	lowest = ps_stack_lowest_sortid(stack);
	first = *stack;
	first->previous = ps_stack_last(stack);
	obj = lowest->previous;
	while (obj != lowest)
	{
		if (obj->previous != lowest && obj->sortid > obj->previous->sortid)
		{
			first->previous = NULL;
			return (0);
		}
		obj = obj->previous;
	}
	first->previous = NULL;
	return (1);
}
