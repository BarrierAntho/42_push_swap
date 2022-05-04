/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_display_obj.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:55:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/15 10:11:30 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_stack_display_obj(t_stack *obj)
{
	if (!obj)
		return ;
	ft_dprintf(1, "%saddr: %p\n%s", GN, obj, NC);
	ft_dprintf(1, "%svalue: %d\n%s", MG, obj->value, NC);
	ft_dprintf(1, "%sindex: %d\n%s", BU, obj->index, NC);
	ft_dprintf(1, "%ssortid: %d\n%s", YE, obj->sortid, NC);
	ft_dprintf(1, "%sprevious: %p\n%s", RD, obj->previous, NC);
	ft_dprintf(1, "%snext: %p\n%s", GN, obj->next, NC);
	ft_dprintf(1, "%s%scost: %d\n%s", EMPHA, CY, obj->cost, NC);
	ft_dprintf(1, "%sra: %d\n%s", CY, obj->ra, NC);
	ft_dprintf(1, "%srb: %d\n%s", CY, obj->rb, NC);
	ft_dprintf(1, "%srr: %d\n%s", CY, obj->rr, NC);
	ft_dprintf(1, "%srra: %d\n%s", CY, obj->rra, NC);
	ft_dprintf(1, "%srrb: %d\n%s", CY, obj->rrb, NC);
	ft_dprintf(1, "%srrr: %d\n%s", CY, obj->rrr, NC);
	ft_dprintf(1, "%s\n", SEP_P);
}
