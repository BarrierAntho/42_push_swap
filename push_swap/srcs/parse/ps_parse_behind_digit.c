/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse_behind_digit.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:37:48 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 09:20:52 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_parse_behind_digit(char *s)
{
	int	err;
	int	i;

	err = 0;
	i = 0;
	while (s[i])
	{
		if (ft_isdigit(s[i]) && ft_ispolarity(s[i + 1]))
			err += ft_error("parse_behing_digit", s, s[i], ERR_BHD_DIG);
		i++;
	}
	return (err);
}
