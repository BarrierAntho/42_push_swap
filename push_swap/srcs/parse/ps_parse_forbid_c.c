/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse_forbid_c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:19:56 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 09:21:02 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_parse_forbid_c(char *s)
{
	int	err;
	int	i;

	err = 0;
	i = 0;
	while (s[i])
	{
		if (ft_isdigit(s[i]) != 1 && ft_ispolarity(s[i]) != 1
			&& s[i] != ' ')
			err += ft_error("parse_forbid_c", s, s[i], ERR_FORBID_C);
		i++;
	}
	return (err);
}
