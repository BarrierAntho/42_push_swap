/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operation_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:05:10 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 15:43:28 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_operation_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*last;

	if (!stack)
		return (ft_error("operation_rotate", "stack", 0, ERR_NOSTACK));
	first = *stack;
	last = ps_stack_last(stack);
	if (!first || first == last)
		return (1);
	if (ps_stack_size(stack) == 2)
	{
		ps_operation_swap(stack);
		return (2);
	}
	second = first->next;
	second->previous = NULL;
	*stack = second;
	last->next = first;
	first->previous = last;
	first->next = NULL;
	return (0);
}
