/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:31:17 by mangarci          #+#    #+#             */
/*   Updated: 2021/12/02 15:24:42 by manugarcias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../lib/libft/libft.h"

typedef struct t_stack
{
    int *stack;
    int len;
}	t_stack;

int		print_error(void);
void	check_digit(char *num);
int		is_repeated(char **num, int i, int aux);
char	**check_error(int argc, char **argv);
void	init_b(t_stack *b);
int		ra(t_stack *a);
int		rb(t_stack *b);
int		rr(t_stack *a, t_stack *b);
int		pa(t_stack *a, t_stack *b);
int		sa(t_stack *a);
int		sb(t_stack *b);
int		ss(t_stack *a, t_stack *b);
int		pa(t_stack *a, t_stack *b);
int		pb(t_stack *a, t_stack *b);
int		push(t_stack *a, t_stack *b);
int		rra(t_stack *a);
int		rrb(t_stack *b);
int		rrr(t_stack *a, t_stack *b);
void	new_stack(t_stack *new_a, t_stack *new_b, t_stack *a, t_stack *b);
int		stack_length(int *a);
int		check_max_int(char *num, int n);
int		check_min_int(char *num, int n);
void	format(char **num, t_stack *a, int argc);
void	vary_position(t_stack *a, t_stack *b);
t_stack	change_num(t_stack *a);
void	calculate(t_stack *a, t_stack *b, t_stack *new);
void	radix_sort(t_stack *a, t_stack *b);
void	move_num(t_stack *a, int min, int index);
void	selection_sort(t_stack *a, t_stack *b);
int		in_order(t_stack *a);
void	three_sort(t_stack *a);
void	five_sort(t_stack *a, t_stack *b);
void 	do_algorithm(t_stack *a, t_stack *b);
#endif
