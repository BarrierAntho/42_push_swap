/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_sort_reverse.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:08:24 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/12 13:21:57 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_sort_reverse(t_stack **stack)
{
	t_stack	*obj;
	size_t	i;

	obj = ps_stack_last(stack);
	if (!obj)
		return (ft_error("check_duplicate", "obj", 0, ERR_NOOBJ));
	i = ps_stack_size(stack);
	while (i > 0)
	{
		if (obj->previous)
		{
			if (obj->value > obj->previous->value)
				return (0);
			obj = obj->previous;
		}
		i--;
	}
	return (1);
}
