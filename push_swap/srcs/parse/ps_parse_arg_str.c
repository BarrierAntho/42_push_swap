/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse_arg_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:09:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 09:24:05 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_parse_arg_str(char **arg, t_stack **stack)
{
	int		err;
	int		i;
	t_stack	*new;

	err = 0;
	i = 0;
	new = NULL;
	while (arg[i] != NULL)
	{
		if ((ft_atoll(arg[i]) > INT_MAX))
			err += ft_error("parse", arg[i], 0, ERR_NOTINT);
		else if (ft_strlen(arg[i]) > 0)
		{
			new = ps_stack_new(arg[i]);
			if (new == NULL)
				err += ft_error("parse", arg[i], 0, ERR_MALLOC_NEW);
			else
				err += ps_stack_add_new(stack, new);
		}
		if (err != 0)
			break ;
		i++;
	}
	return (err);
}
