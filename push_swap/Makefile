# How use it:
# make custom m=x M=y c=z
# make one_three
# make one_three c=1
# make four
# make five
# make hundred
# make big

# Checker definition
#N_CHECKER	:=	../checker_mac
N_CHECKER	:=	../checker_linux

# Outputed word from the checker when the result is ok
KEYWORD		:=	OK

# Test files
F_SUM		:=	../res_sum.log
F_LOG		:=	../push_swap.log
F_DATA		:=	../data.txt
F_PUSH		:=	../res_push.txt
F_MOVE		:=	../move.txt
F_CHECKER	:=	../res_checker.txt

# Range loop of test
# Most important is total of object in the range and not the content
# It could also be written as following: a b c d e f 99 @
# The result will be a loop of 8 iteration
RANGE		:=	1 2
#RANGE		:=	1 2 3 4 5 6 7 8 9 10
#RANGE		:=	1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40
#RANGE		:=	1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50
#RANGE		:=	1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100

# Arg variable used for test
ARG		=	ARG

# Result message
RES_OK		:=	OK, DATA SORTED
RES_KO		:=	FAILED, DATA NOT SORTED
RES_GRADE	:=	GRADE = 

#Color definition
BASE=\033[
RD=$(BASE)0;31m
GN=$(BASE)0;32m
OG=$(BASE)0;33m
BU=$(BASE)0;34m
MG=$(BASE)0;35m
CY=$(BASE)0;36m
YE=$(BASE)1;33m
NC=$(BASE)0m

ifeq ($(c),)
 CHECKER=\#
else
 CHECKER=$(N_CHECKER)
endif

ifeq ($(m),)
 NMIN=1
else
 NMIN=$(m)
endif

ifeq ($(M),)
 NMAX=3
else
 NMAX=$(M)
endif

##############################
# libft settings
FTPATH		:=	libft
IFT		:=	include
FTHEADER	:=	ft_libft.h
FTNAME		:=	libft.a
FT		:=	ft

# Standard settings
SEP_P		:=	"----------------------------------------------"
SEP_S		:=	".............................................."
NAME		:=	push_swap
CC		:=	cc
CFLAGS		:=	-MMD -Wall -Wextra -Werror
#CFLAGSADD	:=	-Wconversion -g3 -fsanitize=address
#CFLAGSADD	:=	-g3 -fsanitize=address
CFLAGSADD	:=	
VALGRIND	:=	valgrind

IPATH		:=	include
OPATH		:=	obj

# SOURCES FOLDER
SRCSPATH	:=	srcs
CHECKPATH	:=	check
COSTPATH	:=	cost
GRAPHPATH	:=	graph
OPERPATH	:=	operation
PARSEPATH	:=	parse
SORTPATH	:=	sort
STACKPATH	:=	stack

RM		:=	rm -rf

PUSHSWAP_SRCS	:=	push_swap.c

CHECK_SRCS	:=	ps_check_cost_direction.c\
			ps_check_duplicate.c\
			ps_check_loop_sortid.c\
			ps_check_loop_sortid_reverse.c\
			ps_check_sort.c\
			ps_check_sortid.c\
			ps_check_sort_reverse.c

COST_SRCS	:=	ps_cost_optimisation.c\
			ps_cost_reset.c\
			ps_cost_reset_obj.c\
			ps_cost_set.c\
			ps_cost_set_direction.c\
			ps_cost_sum.c

GRAPH_SRCS	:=	ps_graph.c\
			ps_graph_header.c\
			ps_graph_stack.c

OPER_SRCS	:=	ps_move_b_to_a.c\
			ps_move.c\
			ps_move_stack_a.c\
			ps_move_stack_b.c\
			ps_operation_push.c\
			ps_operation_reverse_rotate.c\
			ps_operation_rotate.c\
			ps_operation_swap.c\
			ps_pa.c\
			ps_pb.c\
			ps_ra.c\
			ps_rb.c\
			ps_rra.c\
			ps_rrb.c\
			ps_rr.c\
			ps_rrr.c\
			ps_sa.c\
			ps_sb.c\
			ps_ss.c


PARSE_SRCS	:=	ps_parse.c\
			ps_parse_arg.c\
			ps_parse_arg_str.c\
			ps_parse_behind_digit.c\
			ps_parse_polarity.c\
			ps_parse_forbid_c.c

SORT_SRCS	:=	ps_sort.c\
			ps_sort_five.c\
			ps_sort_four.c\
			ps_sort_game_on.c\
			ps_sort_three_sa.c\
			ps_sort_three_sb.c\
			ps_sort_two_sa.c\
			ps_sort_two_sb.c

STACK_SRCS	:=	ps_stack_add_new.c\
			ps_stack_display_obj.c\
			ps_stack_display_stack.c\
			ps_stack_free.c\
			ps_stack_highest_sortid.c\
			ps_stack_init.c\
			ps_stack_init_sortid.c\
			ps_stack_last.c\
			ps_stack_lowest_cost.c\
			ps_stack_lowest_sortid.c\
			ps_stack_median.c\
			ps_stack_median_loop.c\
			ps_stack_new.c\
			ps_stack_refresh.c\
			ps_stack_set_index.c\
			ps_stack_set_sortid.c\
			ps_stack_set_sortid_loop.c\
			ps_stack_size.c

SRCS		:=	$(PUSHSWAP_SRCS)\
			$(CHECK_SRCS)\
			$(COST_SRCS)\
			$(GRAPH_SRCS)\
			$(OPER_SRCS)\
			$(PARSE_SRCS)\
			$(SORT_SRCS)\
			$(STACK_SRCS)

OBJS		=	$(addprefix $(OPATH)/, $(SRCS:.c=.o))\

DEPS		=	$(OBJS:.o=.d)

vpath %.h $(IPATH)
vpath %.c $(SRCSPATH)\
	$(SRCSPATH)/$(CHECKPATH)\
	$(SRCSPATH)/$(COSTPATH)\
	$(SRCSPATH)/$(GRAPHPATH)\
	$(SRCSPATH)/$(OPERPATH)\
	$(SRCSPATH)/$(PARSEPATH)\
	$(SRCSPATH)/$(SORTPATH)\
	$(SRCSPATH)/$(STACKPATH)
vpath %.o $(OPATH)

all:			$(NAME) 

$(OPATH)/%.o:			%.c
			$(CC) $(CFLAGS) $(CFLAGSADD) -I $(IPATH) -I $(FTPATH)/$(IFT) -c $< -o $@

$(NAME):		$(OBJS) 
			make -C $(FTPATH)
			$(CC) $(CFLAGS) $(CFLAGSADD) $(OBJS) -I $(IPATH) -I $(FTPATH)/$(IFT) -L$(FTPATH) -l$(FT) -o $(NAME)

$(OBJS):		| $(OPATH)

$(OPATH):
			mkdir -p $(OPATH)

clean:
			make clean -C $(FTPATH)
			$(RM) $(OPATH)

fclean:			
			make fclean -C $(FTPATH)
			make clean
			$(RM) $(NAME)

re:			
			make re -C $(FTPATH)
			@make fclean
			@make all

norme:
			norminette
			@echo $(SEP_P)

parsing:
			./$(NAME) 
			@echo $(SEP_P)
			./$(NAME) ""
			@echo $(SEP_P)
			./$(NAME) "1"
			@echo $(SEP_P)
			./$(NAME) "a"
			@echo $(SEP_P)
			./$(NAME) "+"
			@echo $(SEP_P)
			./$(NAME) "000000000000000000000000000001"
			@echo $(SEP_P)
			./$(NAME) "1 2 3"
			@echo $(SEP_P)
			./$(NAME) "+1 +2 +3"
			@echo $(SEP_P)
			./$(NAME) "-1 -2 -3"
			@echo $(SEP_P)
			./$(NAME) "-1 +2 -3"
			@echo $(SEP_P)
			./$(NAME) "1 +2 3"
			@echo $(SEP_P)
			./$(NAME) "-1 +2 3"
			@echo $(SEP_P)
			./$(NAME) "1 2+ 3"
			@echo $(SEP_P)
			./$(NAME) "2147483647 -2147483648"
			@echo $(SEP_P)
			./$(NAME) "2147483650 -21474836480"
			@echo $(SEP_P)
			./$(NAME) "1" "1"
			@echo $(SEP_P)
			./$(NAME) "1 1"
			@echo $(SEP_P)
			./$(NAME) "1 3 -01 1"
			@echo $(SEP_P)
			./$(NAME) "1 3 01"
			@echo $(SEP_P)
			./$(NAME) ""
			@echo $(SEP_P)
			./$(NAME) "" "" "-5" "9 -65"
			@echo $(SEP_P)

three:
			@$(call f_rm_log_file)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_loop,3,-999,999,3,3,3,3,3)
			@$(call f_display_result)

four:
			@$(call f_rm_log_file)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_loop,4,-999,999,13,13,13,13,13)
			@$(call f_display_result)

five:
			@$(call f_rm_log_file)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_loop,5,-999,999,13,13,13,13,13)
			@$(call f_display_result)

seven:
			@$(call f_rm_log_file)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,7,-999,999,701,901,1101,1301,1501)
			@$(call f_display_result)

height:
			@$(call f_rm_log_file)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,8,-999,999,701,901,1101,1301,1501)
			@$(call f_display_result)

ten:
			@$(call f_rm_log_file)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,10,-999,999,701,901,1101,1301,1501)
			@$(call f_display_result)

hundred:
			@$(call f_rm_log_file)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_loop,100,-999,999,701,901,1101,1301,1501)
			@$(call f_display_result)

f_hundred:
			@$(call f_rm_log_file)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_loop,500,-999,999,5501,7001,8501,10001,11501)
			@$(call f_display_result)

define	f_rm_log_file
	if [ -f "$(F_LOG)" ]; \
	then \
		rm -rf $(F_LOG); \
		echo "File deleted: $(F_LOG)"; \
	fi
	if [ -f "$(F_SUM)" ]; \
	then \
		rm -rf $(F_SUM); \
		echo "File deleted: $(F_SUM)"; \
	fi
	@echo "$(SEP_P)"
endef

define	f_rm_test_files
	if [ -f "$(F_DATA)" ]; \
	then \
		rm -rf $(F_DATA); \
		echo "File deleted: $(F_DATA)" | tee -a $(F_LOG); \
	fi
	if [ -f "$(F_PUSH)" ]; \
	then \
		rm -rf $(F_PUSH); \
		echo "File deleted: $(F_PUSH)" | tee -a $(F_LOG); \
	fi
	if [ -f "$(F_MOVE)" ]; \
	then \
		rm -rf $(F_MOVE); \
		echo "File deleted: $(F_MOVE)" | tee -a $(F_LOG); \
	fi
	if [ -f "$(F_CHECKER)" ]; \
	then \
		rm -rf $(F_CHECKER); \
		echo "File deleted: $(F_CHECKER)" | tee -a $(F_LOG); \
	fi
endef

define	f_data
	echo "$(YE)Data generation$(NC)" | tee -a $(F_LOG)
	echo "$(CY)MIN=$(2) | NMAX=$(3)$(NC)" | tee -a $(F_LOG) 
	seq $(2) $(3) | shuf -n $(1) | tr '\n' ' ' | tee $(F_DATA) | tee -a $(F_LOG) && echo "\nFile generated: $(F_DATA)" | tee -a $(F_LOG)
endef

define	f_push
	echo "$(YE)Execution of push_swap$(NC)" | tee -a $(F_LOG)
	ARG="`cat $(F_DATA)`" ; $(VALGRIND) ./$(NAME) $$ARG > $(F_PUSH) && echo "File generated: $(F_PUSH)" | tee -a $(F_LOG)
endef

define	f_move
	echo "$(YE)Total move calculation$(NC)" | tee -a $(F_LOG)
	cat $(F_PUSH) | wc -l | tee $(F_MOVE) && echo "File generated: $(F_MOVE)" | tee -a $(F_LOG)
endef

define	f_checker
	echo "$(YE)Execution of checker$(NC)" | tee -a $(F_LOG)
	cat $(F_PUSH) | ./$(N_CHECKER) "`cat $(F_DATA)`" | tee $(F_CHECKER) && echo "File generated: $(F_CHECKER)" | tee -a $(F_LOG)
endef

define	f_result
	echo "$(YE)Result$(NC)" | tee -a $(F_LOG)
	if [ "`cat $(F_CHECKER)`" = "$(KEYWORD)" ]; \
	then \
		echo "$(GN)$(RES_OK)$(NC)" | tee -a $(F_LOG); \
		if [ `cat $(F_MOVE)` -lt $(1) ]; \
		then \
			echo "$(GN)$(RES_GRADE)5$(NC)" | tee -a $(F_LOG); \
		elif [ `cat $(F_MOVE)` -lt $(2) ]; \
		then \
			echo "$(CY)$(RES_GRADE)4$(NC)" | tee -a $(F_LOG); \
		elif [ `cat $(F_MOVE)` -lt $(3) ]; \
		then \
			echo "$(YE)$(RES_GRADE)3$(NC)" | tee -a $(F_LOG); \
		elif [ `cat $(F_MOVE)` -lt $(4) ]; \
		then \
			echo "$(RD)$(RES_GRADE)2$(NC)" | tee -a $(F_LOG); \
		elif [ `cat $(F_MOVE)` -lt $(5) ]; \
		then \
			echo "$(RD)$(RES_GRADE)1$(NC)" | tee -a $(F_LOG); \
		else \
			echo "$(RD)$(RES_GRADE)0$(NC)" | tee -a $(F_LOG); \
		fi; \
	else \
		echo "$(RD)$(RES_KO)$(NC)" | tee -a $(F_LOG); \
		echo "$(RD)$(RES_GRADE)0$(NC)" | tee -a $(F_LOG); \
	fi
endef

define	f_sum
	echo "$(CY)Input data: `cat $(F_DATA)`$(NC)" >> $(F_SUM)
	echo "$(OG)Total of move: `cat $(F_MOVE)`$(NC)" >> $(F_SUM)
	tail -n 2 $(F_LOG) >> $(F_SUM)
	echo "$(SEP_P)" >> $(F_SUM)
endef

define	f_loop
		@$(call f_rm_test_files)
		@$(call f_data,$(1),$(2),$(3))
		@$(call f_push)
		@$(call f_move)
		@$(call f_checker)
		@$(call f_result,$(4),$(5),$(6),$(7),$(8))
		@$(call f_sum)
		@echo "$(SEP_P)" >> $(F_LOG)
endef

define	f_display_result
	echo "$(YE)Summarize of result$(NC)"
	cat $(F_SUM)
endef

-include $(DEPS)

.PHONY:			all clean fclean re norme parsing three four five seven height ten hundred f_hundred
