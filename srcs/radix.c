/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:03:41 by manugarcias       #+#    #+#             */
/*   Updated: 2021/12/03 14:22:14 by manugarcias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	vary_position(t_stack *a, t_stack *new)
{
	int	i;
	int	j;
	int	prev;
	int	index;
	int	num;

	i = 0;
	num = __INT32_MAX__ * -1;
	while (i < a->len)
	{
		j = 0;
		prev = __INT32_MAX__;
		while (j < a->len)
		{
			if (a->stack[j] < prev && a->stack[j] > num)
			{	
				prev = a->stack[j];
				index = j;
			}
		j++;
		}
		new->stack[index] = i + 1;
		num = prev;
		i++;
	}
}

t_stack	change_num(t_stack *a)
{
	t_stack	new;

	new.len = a->len;
	new.stack = (int *)malloc(sizeof(int) * new.len);
	vary_position(a, &new);
	return (new);
}

void	calculate(t_stack *a, t_stack *b, t_stack *new)
{
	int	i;
	int	j;

	i = 0;
	while (!in_order(new))
	{
		j = 0;
		while (j < a->len)
		{
			if (((new->stack[0] >> i) & 1) == 1)
				ra(new);
			else
				pb(new, b);
			j++;
		}
		while (b->len)
			pa(new, b);
		i++;
	}
}

void	radix_sort(t_stack *a, t_stack *b)
{
	t_stack	new;
	int		max_bits;

	new = change_num(a);
	max_bits = 0;
	while (((new.len - 1) >> max_bits) != 0)
		max_bits++;
	calculate(a, b, &new);
	free(new.stack);
}
