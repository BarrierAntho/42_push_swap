/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_set_sortid_loop.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 08:21:57 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 08:32:11 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_stack_set_sortid_loop(t_stack **stack, int id,
		t_stack *obj, t_stack *tmp)
{
	while (ps_check_sortid(stack) != 1)
	{
		while (obj && tmp)
		{
			if (obj->sortid >= 0)
				obj = obj->next;
			else if (tmp->sortid >= 0 || obj == tmp
				|| obj->value < tmp->value)
				tmp = tmp->next;
			else
			{
				obj = tmp;
				tmp = obj->next;
			}
		}
		obj->sortid = id;
		id++;
		obj = *stack;
		tmp = obj->next;
	}
}
