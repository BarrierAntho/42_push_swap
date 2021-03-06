/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:16:32 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 08:16:33 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert.h"

long	ft_atol(const char *s)
{
	unsigned long long	n;
	int					sign;
	int					i;

	n = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	if (ft_ispolarity(s[i]))
	{
		if (s[i] == '-')
			sign *= (-1);
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		n = (n * 10) + (unsigned long long)(s[i] - '0');
		i++;
	}
	return (sign * (long)n);
}
