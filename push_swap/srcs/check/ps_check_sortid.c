/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_sortid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:05:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/13 19:04:22 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_sortid(t_stack **stack)
{
	t_stack	*obj;

	obj = *stack;
	if (!obj)
		return (1);
	while (obj)
	{
		if (obj->sortid < 0)
			return (0);
		obj = obj->next;
	}
	return (1);
}
