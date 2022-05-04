/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_cost_direction.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:28:04 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:29:43 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_cost_direction(t_stack **stack, t_stack *obj)
{
	int	len_stack;

	len_stack = (int)ps_stack_size(stack);
	if (obj->index <= (len_stack / 2))
		return (obj->index);
	else
		return ((-1) * (len_stack - obj->index));
}
