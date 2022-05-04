/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:08:10 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 09:17:25 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_duplicate(t_stack **stack)
{
	t_stack	*active_obj;
	t_stack	*cmp_obj;

	active_obj = *stack;
	cmp_obj = NULL;
	if (!active_obj)
		return (0);
	while (active_obj)
	{
		cmp_obj = *stack;
		while (cmp_obj->next)
		{
			if (active_obj != cmp_obj && active_obj->value == cmp_obj->value)
				return (ft_error("check_duplicate", "obj", 0, ERR_DUPOBJ));
			else
				cmp_obj = cmp_obj->next;
		}
		active_obj = active_obj->next;
	}
	return (0);
}
