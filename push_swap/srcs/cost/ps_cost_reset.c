/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cost_reset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:25:23 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:25:24 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_cost_reset(t_stack **stack1, t_stack **stack2)
{
	t_stack	*obj;

	obj = *stack1;
	while (obj)
	{
		ps_cost_reset_obj(obj);
		obj = obj->next;
	}
	obj = *stack2;
	while (obj)
	{
		ps_cost_reset_obj(obj);
		obj = obj->next;
	}
}
