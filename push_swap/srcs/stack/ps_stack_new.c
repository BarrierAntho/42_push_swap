/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:10:31 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:23:32 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_new(char *s)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = ft_atoi(s);
	new->index = 0;
	new->sortid = -1;
	new->previous = NULL;
	new->next = NULL;
	ps_cost_reset_obj(new);
	return (new);
}
