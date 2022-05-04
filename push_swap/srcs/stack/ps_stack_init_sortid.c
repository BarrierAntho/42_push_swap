/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_init_sortid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:23:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:24:14 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_stack_init_sortid(t_stack **stack)
{
	t_stack	*obj;

	obj = *stack;
	if (!obj)
		return ;
	while (obj)
	{
		obj->sortid = -1;
		obj = obj->next;
	}
}
