/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_game_on.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:56:45 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/23 17:17:45 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_sort_game_on(t_stack **stack1, t_stack **stack2)
{
	t_stack	*lowest;

	lowest = NULL;
	ps_pb(stack1, stack2);
	ps_pb(stack1, stack2);
	ps_pb(stack1, stack2);
	ps_sort_three_sb(stack2);
	while (*stack1)
	{
		ps_stack_set_index(stack1);
		ps_stack_set_index(stack2);
		ps_cost_set(stack1, stack2);
		lowest = ps_stack_lowest_cost(stack1);
		ps_move(stack1, stack2, lowest);
		ps_cost_reset(stack1, stack2);
	}
	ps_stack_set_index(stack2);
	ps_move_b_to_a(stack1, stack2);
	return (0);
}
