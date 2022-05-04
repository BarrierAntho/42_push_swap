/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_set_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:49:34 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/12 20:30:35 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_stack_set_index(t_stack **stack)
{
	t_stack	*obj;
	int		index;

	obj = *stack;
	if (!obj)
		return ;
	index = 0;
	while (obj)
	{
		obj->index = index;
		obj = obj->next;
		index++;
	}
}
