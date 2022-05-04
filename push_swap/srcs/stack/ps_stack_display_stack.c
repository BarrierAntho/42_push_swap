/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_display_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:09:54 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/13 13:56:42 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_stack_display_stack(t_stack **stack)
{
	t_stack	*obj;

	if (!stack)
		return ;
	obj = *stack;
	while (obj)
	{
		ps_stack_display_obj(obj);
		obj = obj->next;
	}
}
