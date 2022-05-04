/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_refresh.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:34:34 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/14 20:19:45 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_stack_refresh(t_stack **stack1, t_stack **stack2,
		t_stack *obj1, t_stack *obj2)
{
	obj1 = *stack1;
	obj2 = *stack2;
	ps_stack_set_index(stack1);
	ps_stack_set_index(stack2);
	ft_dprintf(1, "REFRESH\n");
	ft_dprintf(1, "REFRESH OBJ1\n");
	ps_stack_display_obj(obj1);
	ft_dprintf(1, "REFRESH OBJ2\n");
	ps_stack_display_obj(obj2);
}
