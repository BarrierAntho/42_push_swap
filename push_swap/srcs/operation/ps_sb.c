/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:07:32 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/16 16:01:00 by antho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_sb(t_stack **stack)
{
	if (ps_operation_swap(stack))
		return (0);
	ft_dprintf(1, "%s\n", DO_SB);
	return (1);
}
