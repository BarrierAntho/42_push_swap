/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:10:36 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:10:38 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ps_stack_size(t_stack **stack)
{
	size_t	n;
	t_stack	*obj;

	n = 0;
	if (!stack)
		return (n);
	obj = *stack;
	while (obj)
	{
		obj = obj->next;
		n++;
	}
	return (n);
}
