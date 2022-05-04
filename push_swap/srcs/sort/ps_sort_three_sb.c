/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_three_sb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:33:56 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 16:55:32 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * UC: 1 2 3, 1 3 2, 2 1 3, 2 3 1, 3 1 2
 */
int	ps_sort_three_sb(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *stack;
	second = first->next;
	third = ps_stack_last(stack);
	if (ps_check_loop_sortid_reverse(stack))
		return (0);
	if (first->value < second->value && first->value < third->value
		&& second->value < third->value)
		return (ps_rb(stack) + ps_sb(stack));
	else if (first->value < second->value && first->value < third->value)
		return (ps_rb(stack));
	else if (first->value > second->value && first->value < third->value)
		return (ps_rrb(stack));
	else if (first->value < second->value && first->value > third->value)
		return (ps_sb(stack));
	else
		return (ps_sb(stack) + ps_rb(stack));
}
