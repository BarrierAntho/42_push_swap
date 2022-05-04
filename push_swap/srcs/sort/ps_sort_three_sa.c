/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_three_sa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:54:56 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 16:54:59 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * UC: 1 3 2, 2 1 3, 2 3 1, 3 1 2, 3 2 1
 */
int	ps_sort_three_sa(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *stack;
	second = first->next;
	third = ps_stack_last(stack);
	if (first->value < second->value && first->value < third->value)
		return (ps_rra(stack) + ps_sa(stack));
	else if (first->value > second->value && first->value < third->value)
		return (ps_sa(stack));
	else if (first->value < second->value && first->value > third->value)
		return (ps_rra(stack));
	else if (first->value > second->value && first->value > third->value
		&& second->value < third->value)
		return (ps_ra(stack));
	else
		return (ps_ra(stack) + ps_sa(stack));
}
