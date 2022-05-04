/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_set_sortid.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:22:10 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 08:29:43 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_stack_set_sortid(t_stack **stack)
{
	t_stack	*obj;
	t_stack	*tmp;
	int		id;

	obj = *stack;
	tmp = obj->next;
	id = 0;
	ps_stack_set_sortid_loop(stack, id, obj, tmp);
}
