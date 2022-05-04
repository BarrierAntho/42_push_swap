/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_message.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:28:50 by abarrier          #+#    #+#             */
/*   Updated: 2022/04/10 14:36:28 by antho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_MESSAGE_H
# define PS_MESSAGE_H

# include "push_swap.h"

/***COLOR MAPPING***/
# define RD "\x1b[31m"
# define GN "\x1b[32m"
# define YE "\x1b[33m"
# define NC "\x1b[0m"

/***ARGUMENT DEFINITION***/
# define ERR_ARGNULL "Argument address NULL"
# define ERR_ARGLEN "Argument is empty"
# define ERR_FORBID_C "Argument contains forbidden character"
# define ERR_CONSEC_POL "Argument contains consecutive polarity char '+,-'"
# define ERR_BHD_DIG "Argument contains polarity sign behind digit"
# define ERR_POL_SPACE "Argument contains nothing behind polarity"
# define ERR_NOTINT "Argument is not INT"

/***STACK***/
# define ERR_MALLOC_NEW "Malloc issue for a new object in stack"
# define ERR_NOSTACK "No stack address"
# define ERR_NONEW "No new object address"
# define ERR_NOOBJ "No object adrress"

/***CHECK***/
# define ERR_DUPOBJ "Duplicate int"

/***OPERATIONS***/
# define DO_SA "sa"
# define DO_SB "sb"
# define DO_SS "ss"
# define DO_PA "pa"
# define DO_PB "pb"
# define DO_RA "ra"
# define DO_RB "rb"
# define DO_RR "rr"
# define DO_RRA "rra"
# define DO_RRB "rrb"
# define DO_RRR "rrr"

#endif
