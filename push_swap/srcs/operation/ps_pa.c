/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 08:39:53 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/16 16:03:03 by antho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_pa(t_stack **src, t_stack **dst)
{
	if (ps_operation_push(src, dst))
		return (0);
	ft_dprintf(1, "%s\n", DO_PA);
	return (1);
}
