/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operation_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:07:48 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 19:59:18 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_operation_swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	if (!stack)
		return (ft_error("operation_swap", "stack", 0, ERR_NOSTACK));
	first = *stack;
	if (!first || !first->next)
		return (1);
	second = first->next;
	third = second->next;
	if (third)
		third->previous = first;
	first->previous = second;
	first->next = second->next;
	second->previous = NULL;
	second->next = first;
	*stack = second;
	return (0);
}
