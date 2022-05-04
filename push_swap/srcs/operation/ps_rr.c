/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:11:56 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/16 15:58:42 by antho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_rr(t_stack **stack1, t_stack **stack2)
{
	ps_operation_rotate(stack1);
	ps_operation_rotate(stack2);
	ft_dprintf(1, "%s\n", DO_RR);
	return (1);
}
