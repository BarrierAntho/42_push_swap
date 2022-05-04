/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:08:24 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:08:25 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_sort(t_stack **stack)
{
	t_stack	*obj;

	obj = *stack;
	if (!obj)
		return (ft_error("check_duplicate", "obj", 0, ERR_NOOBJ));
	while (obj->next)
	{
		if (obj->value > obj->next->value)
			return (0);
		obj = obj->next;
	}
	return (1);
}
