/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:07:39 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/16 16:01:55 by antho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_ss(t_stack **stack1, t_stack **stack2)
{
	if (ps_operation_swap(stack1) && ps_operation_swap(stack2))
		return (0);
	ft_dprintf(1, "%s\n", DO_SS);
	return (1);
}
