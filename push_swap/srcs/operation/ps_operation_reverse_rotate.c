/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operation_reverse_rotate.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:05:10 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 15:30:40 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_operation_reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second_last;
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
	second_last = last->previous;
	second_last->next = NULL;
	*stack = last;
	last->previous = NULL;
	last->next = first;
	first->previous = last;
	return (0);
}
