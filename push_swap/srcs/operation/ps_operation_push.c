/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operation_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:07:26 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/14 08:47:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_operation_push(t_stack **src, t_stack **dst)
{
	t_stack	*first_src;
	t_stack	*first_dst;
	t_stack	*second_src;

	if (!src || !dst)
		return (ft_error("do_push", "src || dst", 0, ERR_NOSTACK));
	first_src = *src;
	first_dst = *dst;
	if (!first_src)
		return (1);
	second_src = first_src->next;
	if (second_src)
		second_src->previous = NULL;
	if (!first_dst)
		first_src->next = NULL;
	else
	{
		first_src->next = first_dst;
		first_dst->previous = first_src;
	}
	*dst = first_src;
	*src = second_src;
	return (0);
}
