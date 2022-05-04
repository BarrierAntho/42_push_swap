/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_graph_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:08:49 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/15 09:28:43 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_graph_stack(t_stack **stack, size_t len, char *title, char *color)
{
	t_stack	*obj;
	size_t	i;

	if (!stack)
	{
		ft_error("graph_stack", "stack", 0, ERR_NOSTACK);
		return ;
	}
	obj = *stack;
	i = 0;
	ft_dprintf(1, "%s%s:\t", color, title);
	while (i < len)
	{
		if (obj)
		{
			ft_dprintf(1, "%d\t", obj->value);
			obj = obj->next;
		}
		else
			ft_dprintf(1, "\t");
		i++;
	}
	ft_dprintf(1, "<END\n%s", NC);
}
