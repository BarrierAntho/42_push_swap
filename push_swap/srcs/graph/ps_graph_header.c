/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_graph_header.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:08:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/11 15:08:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_graph_header(size_t len, char *title)
{
	size_t	i;

	i = 0;
	ft_dprintf(1, "%s%s\n%s:\t", YE, SEP_P, title);
	while (i < len)
	{
		ft_dprintf(1, "%d\t", (int)i);
		i++;
	}
	ft_dprintf(1, "<END\n");
	i = 0;
	ft_dprintf(1, "-------");
	while (i < len)
	{
		ft_dprintf(1, "---------");
		i++;
	}
	ft_dprintf(1, "\n%s", NC);
}
