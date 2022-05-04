/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse_polarity.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:17:09 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 09:21:09 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_parse_polarity(char *s)
{
	int	err;
	int	i;

	err = 0;
	i = 0;
	while (s[i])
	{
		if (ft_ispolarity(s[i]))
		{
			if (ft_ispolarity(s[i + 1]))
				err += ft_error("parse_polarity",
						s, s[i], ERR_CONSEC_POL);
			else if (ft_isspace(s[i + 1]) || s[i + 1] == 0)
				err += ft_error("parse_polarity",
						s, s[i], ERR_POL_SPACE);
		}
		i++;
	}
	return (err);
}
