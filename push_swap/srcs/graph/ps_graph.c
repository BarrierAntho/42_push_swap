/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_graph.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:08:37 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/15 09:49:46 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_graph(t_stack **stack1, t_stack **stack2)
{
	size_t	len_max;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ps_stack_size(stack1);
	len_s2 = ps_stack_size(stack2);
	if (len_s1 >= len_s2)
		len_max = len_s1;
	else
		len_max = len_s2;
	ps_graph_header(len_max, "INDEX");
	ps_graph_stack(stack1, len_max, "STCKA", GN);
	ps_graph_stack(stack2, len_max, "STCKB", CY);
	ft_dprintf(1, "%s\n", SEP_P);
}
