/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:10:21 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 14:47:46 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_last(t_stack **stack)
{
	t_stack	*obj;

	if (!stack || *stack == NULL)
		return (NULL);
	obj = *stack;
	if (!obj)
		return (NULL);
	while (obj->next)
		obj = obj->next;
	return (obj);
}
