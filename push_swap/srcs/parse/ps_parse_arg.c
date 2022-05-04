/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:28:22 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 09:20:39 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_parse_arg(char *arg)
{
	int	err;

	err = 0;
	if (!arg)
		return (ft_error("parse_str", NULL, 0, ERR_ARGNULL));
	err += ps_parse_forbid_c(arg);
	err += ps_parse_polarity(arg);
	err += ps_parse_behind_digit(arg);
	return (err);
}
