/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_median.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:10:53 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 08:20:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_median(t_stack **stack, t_stack *obj)
{
	t_stack	*median;
	t_stack	*first;
	t_stack	*last;
	t_stack	*highest;

	first = *stack;
	median = first;
	if (ps_stack_size(stack) < 2)
		return (median);
	last = ps_stack_last(stack);
	highest = ps_stack_highest_sortid(stack);
	last->next = first;
	first->previous = last;
	median = ps_stack_median_loop(highest, obj, median);
	first->previous = NULL;
	last->next = NULL;
	return (median);
}
