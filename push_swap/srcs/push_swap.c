/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:13:32 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 09:39:16 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		err;
	t_stack	**sa;
	t_stack	**sb;

	err = 0;
	if (argc <= 1)
		return (0);
	sa = ps_stack_init();
	sb = ps_stack_init();
	if (!sa || !sb)
		err += ft_error("main", "stack init", 0, ERR_MALLOC);
	else if (ps_parse(&argv[1], sa) || ps_check_duplicate(sa))
		err++;
	else if (ps_stack_size(sa) <= 1 || ps_check_sort(sa))
		err = 0;
	else
		ps_sort(sa, sb);
	ps_stack_free(sa);
	ps_stack_free(sb);
	return (err);
}
