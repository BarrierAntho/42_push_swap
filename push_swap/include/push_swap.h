/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:15:04 by abarrier          #+#    #+#             */
/*   Updated: 2022/05/02 08:32:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

# include "ft_libft.h"
# include "ps_message.h"

/***GLOBAL VARIABLE***/
# define PS_SEPARATOR ' '

// INT_MAX = 2147483647 | INT_MIN = -2147483648
# define MAX_LEN_INT 11

/***STRUCTURE***/
typedef struct s_stack
{	
	int					value;
	int					index;
	int					sortid;
	struct s_stack		*previous;
	struct s_stack		*next;
	int					cost;
	int					ra;
	int					rb;
	int					rr;
	int					rra;
	int					rrb;
	int					rrr;
}						t_stack;

/***CHECK***/
int		ps_check_cost_direction(t_stack **stack, t_stack *obj);
int		ps_check_duplicate(t_stack **stack);
int		ps_check_loop_sortid(t_stack **stack);
int		ps_check_loop_sortid_reverse(t_stack **stack);
int		ps_check_sort(t_stack **stack);
int		ps_check_sortid(t_stack **stack);
int		ps_check_sort_reverse(t_stack **stack);

/***COST***/
void	ps_cost_optimisation(t_stack *obj);
void	ps_cost_reset(t_stack **stack1, t_stack **stack2);
void	ps_cost_reset_obj(t_stack *obj);
void	ps_cost_set(t_stack **stack1, t_stack **stack2);
void	ps_cost_set_direction(char stack, t_stack *obj, int cost);
void	ps_cost_sum(t_stack *obj);

/***GRAPH***/
void	ps_graph(t_stack **stack1, t_stack **stack2);
void	ps_graph_header(size_t len, char *title);
void	ps_graph_stack(t_stack **stack, size_t len, char *title, char *color);

/***OPERATIONS***/
void	ps_move_b_to_a(t_stack **stack1, t_stack **stack2);
void	ps_move(t_stack **stack1, t_stack **stack2, t_stack *obj);
void	ps_move_stack_a(t_stack **stack, t_stack *obj);
void	ps_move_stack_b(t_stack **stack, t_stack *obj);
void	ps_move(t_stack **stack1, t_stack **stack2, t_stack *obj);
int		ps_operation_push(t_stack **src, t_stack **dst);
int		ps_operation_reverse_rotate(t_stack **stack);
int		ps_operation_rotate(t_stack **stack);
int		ps_operation_swap(t_stack **stack);
int		ps_pa(t_stack **src, t_stack **dst);
int		ps_pb(t_stack **src, t_stack **dst);
int		ps_ra(t_stack **stack);
int		ps_rb(t_stack **stack);
int		ps_rra(t_stack **stack);
int		ps_rrb(t_stack **stack);
int		ps_rr(t_stack **stack1, t_stack **stack2);
int		ps_rrr(t_stack **stack1, t_stack **stack2);
int		ps_sa(t_stack **stack);
int		ps_sb(t_stack **stack);

/***PARSING***/
int		ps_parse(char **argv, t_stack **stack);
int		ps_parse_arg(char *arg);
int		ps_parse_arg_str(char **arg, t_stack **stack);
int		ps_parse_behind_digit(char *s);
int		ps_parse_forbid_c(char *s);
int		ps_parse_polarity(char *s);

/***SORT***/
int		ps_sort(t_stack **stack1, t_stack **stack2);
int		ps_sort_five(t_stack **stack1, t_stack **stack2);
int		ps_sort_four(t_stack **stack1, t_stack **stack2);
int		ps_sort_game_on(t_stack **stack1, t_stack **stack2);
int		ps_sort_three_sa(t_stack **stack);
int		ps_sort_three_sb(t_stack **stack);
int		ps_sort_two_sa(t_stack **stack);
int		ps_sort_two_sb(t_stack **stack);

/***STACK***/
int		ps_stack_add_new(t_stack **stack, t_stack *new);
void	ps_stack_display_obj(t_stack *obj);
void	ps_stack_display_stack(t_stack **stack);
void	ps_stack_free(t_stack **stack);
t_stack	*ps_stack_highest_sortid(t_stack **stack);
t_stack	**ps_stack_init(void);
void	ps_stack_init_sortid(t_stack **stack);
t_stack	*ps_stack_last(t_stack **stack);
t_stack	*ps_stack_lowest_cost(t_stack **stack);
t_stack	*ps_stack_lowest_sortid(t_stack **stack);
t_stack	*ps_stack_median(t_stack **stack, t_stack *obj);
t_stack	*ps_stack_median_loop(t_stack *highest, t_stack *obj, t_stack *median);
t_stack	*ps_stack_new(char *s);
void	ps_stack_refresh(t_stack **stack1, t_stack **stack2,
			t_stack *obj1, t_stack *obj2);
void	ps_stack_set_index(t_stack **stack);
void	ps_stack_set_sortid(t_stack **stack);
void	ps_stack_set_sortid_loop(t_stack **stack, int id,
			t_stack *obj, t_stack *tmp);
size_t	ps_stack_size(t_stack **stack);

#endif
