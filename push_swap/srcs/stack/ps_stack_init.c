/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:10:14 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:10:16 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	**ps_stack_init(void)
{
	t_stack	**new;

	new = (t_stack **)malloc(sizeof(t_stack *));
	if (!new)
		return (NULL);
	*new = NULL;
	return (new);
}
