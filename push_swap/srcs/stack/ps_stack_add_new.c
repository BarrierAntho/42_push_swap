/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_add_new.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:09:45 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:27:34 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_stack_add_new(t_stack **stack, t_stack *new)
{
	t_stack	*obj;

	if (!stack)
		return (ft_error("stack_add_new", "stack", 0, ERR_NOSTACK));
	if (!new)
		return (ft_error("stack_add_new", "stack", 0, ERR_NONEW));
	obj = ps_stack_last(stack);
	if (!obj)
	{
		new->index = 0;
		new->previous = NULL;
		*stack = new;
	}
	else
	{
		obj->next = new;
		new->index = obj->index + 1;
		new->previous = obj;
	}
	new->next = NULL;
	return (0);
}
