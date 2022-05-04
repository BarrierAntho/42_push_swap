/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:28:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 16:55:16 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_sort(t_stack **stack1, t_stack **stack2)
{
	size_t	len_stack1;

	len_stack1 = ps_stack_size(stack1);
	ps_stack_set_sortid(stack1);
	if (len_stack1 == 2)
		return (ps_sort_two_sa(stack1));
	else if (len_stack1 == 3)
		return (ps_sort_three_sa(stack1));
	else if (len_stack1 == 4)
		return (ps_sort_four(stack1, stack2));
	else if (len_stack1 == 5)
		return (ps_sort_five(stack1, stack2));
	else
		return (ps_sort_game_on(stack1, stack2));
	return (0);
}
