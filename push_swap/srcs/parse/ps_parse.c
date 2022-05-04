/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:09:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 08:45:57 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_parse(char **argv, t_stack **stack)
{
	int		err;
	char	*trim;
	char	**arg;

	err = 0;
	while (*argv != NULL && err == 0)
	{
		if (ps_parse_arg(*argv))
			return (1);
		trim = ft_strtrim(*argv);
		if (!trim)
			return (ft_error("parse", "strtrim", 0, ERR_MALLOC));
		arg = ft_split(trim, PS_SEPARATOR);
		if (!arg)
		{
			free(trim);
			return (ft_error("parse", "split", 0, ERR_MALLOC));
		}
		err += ps_parse_arg_str(arg, stack);
		ft_free_ptrptr_str(arg);
		free(trim);
		argv++;
	}
	return (err);
}
