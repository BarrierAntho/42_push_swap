/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:10:03 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/13 14:56:29 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_stack_free(t_stack **stack)
{
	t_stack	*obj;
	t_stack	*del;

	if (!stack)
		return ;
	obj = *stack;
	while (obj)
	{
		del = obj;
		obj = obj->next;
		free(del);
		del = NULL;
		*stack = obj;
	}
	free(stack);
	stack = NULL;
}
