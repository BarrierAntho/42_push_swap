/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_median_loop.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 08:19:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 08:19:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_median_loop(t_stack *highest,	t_stack *obj, t_stack *median)
{
	while (1)
	{
		if (obj->sortid < median->previous->sortid
			&& obj->sortid > median->sortid)
			break ;
		else if ((median == highest
				&& obj->sortid < median->previous->sortid
				&& obj->sortid < median->sortid)
			|| (median == highest
				&& obj->sortid > median->previous->sortid
				&& obj->sortid > median->sortid))
			break ;
		median = median->next;
	}
	return (median);
}
