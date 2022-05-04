/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:32:24 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/16 16:00:25 by antho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_rrr(t_stack **stack1, t_stack **stack2)
{
	ps_operation_reverse_rotate(stack1);
	ps_operation_reverse_rotate(stack2);
	ft_dprintf(1, "%s\n", DO_RRR);
	return (1);
}
